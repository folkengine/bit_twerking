//============================================================================
// Name        : bit_twerking.cpp
// Author      : Chris Baker
// Version     :
// Copyright   : None
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int abs(int v) {
  unsigned int r;  // the result goes here
  int const mask = v >> sizeof(int) * CHAR_BIT - 1;

  r = (v + mask) ^ mask;
  return r;
}

short parity(unsigned long x) {
  short result = 0;
  while (x) {
    printf("x: %ld \n", x);
    result ^= (x & 1);
    x >>= 1;
  }
  return result;
}

short parityImproved(unsigned long x) {
  short result = 0;
  while (x) {
    printf("x: %ld \n", x);
    result ^= 1;
    x &= (x - 1);
  }
  return result;
}

int main() {
  short b = parity(24);
  printf("Characters: %d \n", b);
  return 0;
}
