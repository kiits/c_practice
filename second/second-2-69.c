#include<stdio.h>
#include <assert.h>
#include <limits.h>

unsigned rotate_left(unsigned x, int n){
    int w = sizeof(x) << 3;
    int overflor = (-1 << (w - n) ) & x;
    x = x << n;
    return overflor >> (w - n) | x;

}
void main(){
    assert(rotate_left(0x12345678, 4) == 0x23456781);
    assert(rotate_left(0x12345678, 32) == 0x12345678);
    assert(rotate_left(0x12345678, 0) == 0x12345678);
    
}
