#include<stdio.h>
#include <assert.h>
#include <limits.h>

int leftmost_one(unsigned x) {
  /*
   * first, generate a mask that all bits after leftmost one are one
   * e.g. 0xFF00 -> 0xFFFF, and 0x6000 -> 0x7FFF
   * If x = 0, get 0
   */
    x |= x >> 1;
    printf("%.2x\n", x);
    x |= x >> 2;
    printf("%.2x\n", x);
    x |= x >> 4;
    printf("%.2x\n", x);
    x |= x >> 8;
    printf("%.2x\n", x);
    x |= x >> 16;
    printf("%.2x\n", x);
  /*
   * then, do (mask >> 1) + (mask && 1), in which mask && 1 deals with case x = 0, reserve leftmost bit one
   * that's we want
   */
  return (x >> 1) + (x && 1);
}


void main(){
    assert(leftmost_one(0xff00) == 0x8000); // 10100100 01010010
    assert(leftmost_one(0x40000000) == 0x40000000);
}
