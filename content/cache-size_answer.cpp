#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <chrono>

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
  const int pageSizeMask = 4095;
  *rawPtr = reinterpret_cast<uint8_t *>(malloc(byteSize + pageSizeMask));
  uintptr_t temp = reinterpret_cast<uintptr_t>(*rawPtr);
  temp = (temp + pageSizeMask) & ~pageSizeMask;
  return  reinterpret_cast<uint8_t*>(temp);
}

int main(int argc, char *argv[]) {
  const int totalMemSize = 128 * 1024 * 1024;
  const int CacheLineSize = 64;

  volatile uint8_t *a, *b;
  uint8_t *rawPtr, *alignedPointer;
  int  i;
  int numCacheLines, numIter;

  for (numCacheLines = 2; numCacheLines <= 131072; numCacheLines *= 2) {
    alignedPointer = AllocPageAligned(totalMemSize, &rawPtr);

    /* Touch all pages */
    std::memset( reinterpret_cast<void *>(alignedPointer), 1, totalMemSize );
    a = b = alignedPointer;

    numIter = totalMemSize / (numCacheLines * CacheLineSize);

    Timer timer;
    for(int k = 0; k < numIter; ++k) {
      a = b;
      /* Each iteration in the loop accesses one cache line */
      for(int l = 0; l < numCacheLines; ++l) {
        i = *a;
        i = *a;
        i = *a;
        i = *a;
        i = *a;
        i = *a;
        i = *a;
        i = *a;
        a += CacheLineSize;
      }
    }
    double total_time = timer.getElapsedNanoseconds();

    // This never prints, but it is there so that the the compiler doesn't optimize out the entire computation.
    static auto neverZero = time(nullptr);
    if (neverZero == 0) std::cout <<i <<std::endl;

    std::cout <<"Your guess: "<< numCacheLines*CacheLineSize <<" B ";
    std::cout <<"Measured Access time per cache line (64B) " << total_time/numCacheLines/numIter/8 <<" nanoseconds " <<std::endl;

    free(rawPtr);
  }

  return 0;
}
