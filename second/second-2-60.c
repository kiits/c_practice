#include<stdio.h>
#include <assert.h>

unsigned replace_byte(unsigned x, int i, unsigned char b){
    unsigned char *hex = (unsigned char *) &x;
    hex[i] = b;
    unsigned *res;
    res = (unsigned *) hex;
    printf("0x%x\n", res[0]);
    return res[0];
}

void main(){
    assert(replace_byte(0x12345678, 2, 0xAB) == 0x12ab5678);
    assert(replace_byte(0x12345678, 0, 0xAB) == 0x123456ab);
}
