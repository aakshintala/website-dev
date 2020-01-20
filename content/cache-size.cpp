#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <chrono>

#define PAGE_SIZE 4096
#define PAGE_SIZE_MASK PAGE_SIZE-1

// We'd like the array to be larger than current cache sizes (16MiB?)
#define TOTAL_MEM_SIZE (128 * 1024 * 1024)
#define L1_CACHE_LINE_SIZE 64

class Timer {
public:
  Timer() {
    this->reset();
  }

  void reset() {
    this->time  = std::chrono::high_resolution_clock::now();
  }

  double getElapsedNanoseconds() const {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(
      std::chrono::high_resolution_clock::now() - this->time).count();
  }

  private:
  std::chrono::high_resolution_clock::time_point time;
};

// Allocate a byte array of given size, aligned on a page boundary
// Caller will call free(rawptr)
uint8_t* AllocPageAligned(int byteSize, uint8_t **rawPtr) {
  *rawPtr = reinterpret_cast<uint8_t *>(malloc(byteSize + PAGE_SIZE_MASK));
  uintptr_t temp = reinterpret_cast<uintptr_t>(*rawPtr);
  temp = (temp + PAGE_SIZE_MASK) & ~PAGE_SIZE_MASK;
  return  reinterpret_cast<uint8_t*>(temp);
}

int main(int argc, char *argv[]) {
  uint8_t *a, *b, *rawPtr;
  int  i, num_cache_lines_guess, num_iter, k, l;
  Timer timer;

  if(argc < 2) {
    std::cout << "Usage: " <<argv[0] <<" guess_num_cache_lines" <<std::endl;
    std::exit(EXIT_FAILURE);
  }

  num_cache_lines_guess = std::atoi(argv[1]);
  b = a = AllocPageAligned(TOTAL_MEM_SIZE, &rawPtr);

  /* Touch all pages */
  std::memset( reinterpret_cast<void *>(a), 1, TOTAL_MEM_SIZE );

  num_iter = TOTAL_MEM_SIZE / (num_cache_lines_guess * L1_CACHE_LINE_SIZE);

  timer.reset();
  for(a = b,k = 0; k < num_iter; k++, a = b) {
    /* Each iteration in the loop accesses one cache line */
    for(l = 0; l < num_cache_lines_guess; l++,a += L1_CACHE_LINE_SIZE) {
      i = *a;
    }
  }
  double total_time = timer.getElapsedNanoseconds();

  // Output i so that the compiler doesn't optimize out the entire computation above
  std::cout << i <<std::endl;

  std::cout << "Access time for block of size "<< num_cache_lines_guess * L1_CACHE_LINE_SIZE <<" bytes: " << total_time/num_iter <<" nanoseconds" <<std::endl;

  free(rawPtr);

  return 0;
}