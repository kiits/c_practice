#include<stdio.h>
#include <assert.h>
#include <limits.h>

int lower_one_mask(int n){
    printf("%x\n", (-2 << n - 1));
    return ~(-2 << n - 1);
    //printf("%x \n", ((unsigned) 0xffffffff << n));
    //return ~(-1 << n);
}
void main(){
    assert(lower_one_mask(3) == 0x7);
    assert(lower_one_mask(1) == 0x1);
    assert(lower_one_mask(32) == 0xffffffff);
    //printf("%x\n", lower_one_mask(32));
    //return lower_one_mask(32);
}
