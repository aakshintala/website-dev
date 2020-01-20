---
title: "Assignment 1"
date: 2018-06-23T17:26:45-07:00
draft: false
toc: false
---

## Part 1: Determining cache size (10 points)

In this assignment, you are going to modify a given [program](../cache-size.cpp) to estimate the size of each of the caches (L1, L2 and L3 if your processor has one) on your processor.

The basic idea to measure the size of a cache is to look for a spike in access latency when you access increasing amounts of data (e.g., when the data you access fits entirely in the L1 cache, access time tends for all data sizes up to the cache size tends to be the same; when you access data that exceeds the cache size, you will notice a spike in access latency as the data must be read in from the L2 cache and so on...). When you notice a a jump in access time that is not commensurate with the change in data size, you have found a cross-over point (i.e., you're now fetching data from a different level of the cache hierarchy). The provided program illustrates this idea, but is prone to being defeated by most modern processor's pre-fetchers, as well as their ability to have multiple outstanding loads and issue multiple instructions at once.

Your task is to figure out how to defeat the processor's memory access optimizations in order to programmatically measure the size of each level of your processor's cache hierarchy.

You should be able to do this on your own laptop. Most recent Intel and AMD processors (in the last decade or so) have 32KiB L1-I and L1-D caches (per core), and a 256KiB L2 cache (also usually per core) and a variably sized L3 cache. The typical cache line size is 64B. You should check [7CPU.com](https://www.7-cpu.com/), [Intel ARK](https://ark.intel.com/content/www/us/en/ark.html) and [AMD's product listing](https://www.amd.com/en/products/specifications) for more accurate data for your specific processor.

cache-size.cpp should be compiled with the -O2 flag: `g++ -o cache-size -O2 cache-size.cpp`. Take care to ensure that you're amortizing the cost of the loop instructions in order to get an accurate measurement of the access latency of the cache.

## Part 2: Determining cache timing (5 points)
Modify your program to estimate the average load time of each level of your processor's cache hierarchy. The key insight here is to get the processor to load the data into the cache you're trying to time, and then measure the time taken to access that data. You will once again have to defeat the processor's optimizations.

## Submission instructions:
For this assignment, I would like you to send me a link to a private GitHub/Bitbucket repository with your modified programs, and a write up that details the steps you took to defeat the processor's prefetechers and other optimizations, and the expected and measured cache sizes/timing for your processor.