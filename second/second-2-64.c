#include<stdio.h>
#include <assert.h>
#include <limits.h>

int any_odd_one(unsigned x){
    printf("%d\n", !!(0xAAAAAAAA & x)); // 0b1010 0b0101 0b0100
    return !!(0xAAAAAAAA & x);
}

void main(){
    assert(any_odd_one(0x2) == 1);
    assert(any_odd_one(0x4) == 0);

}
