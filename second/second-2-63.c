#include<stdio.h>
#include <assert.h>
#include <limits.h>

unsigned srl(unsigned x, int k){
    unsigned xsra = (int) x >> k;
    //1010111 1101011 1 7 0111
    //        0101011
    int w = sizeof(x) * 8;
    int mask = (int) -1 << (w - k);
    printf("%x\n", xsra & ~mask);
    // if k != 0:
    return xsra & xsra & ~mask;
}
int sra(int x, int k){
    int xsrl = (unsigned) x >> k;
    int w = sizeof(x) * 8;
    // 10000000 or 000000000 011111111
    // 1010111 >> 2 0010101 1100000 1110101
    // 0110111 >> 2 0001101 0000000 0001101
    // 1101011 
    int zf = !(INT_MIN & x) - 1; // 1 or 0 -> 00000000 or ffffffff
    int mask = (int) zf << (w - k);
    printf("%x\n", xsrl | mask);
    // if k != 0:
    return xsrl | mask;
}


void main(){
    unsigned test_unsigned = 0x87654321;
    int test_int = 0x87654321;

    //srl(0xfffffffe, 1);
    assert(srl(0xfffffffe, 1) == 0x7fffffff);
    //sra(0xfffffffe, 1);
    assert(sra(0xfffffffe, 2) == 0xffffffff);
    assert(sra(0x7ffffffe, 1) == 0x3fffffff);

    assert (srl (test_unsigned, 4) == test_unsigned >> 4);
    assert (sra (test_int, 4) == test_int >> 4);
}
