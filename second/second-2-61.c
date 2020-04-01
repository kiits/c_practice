#include<stdio.h>
#include <assert.h>

int test(int x){
    if(!(x ^ 0xFFFFFFFF) || !(x & 0xFFFFFFFF) || !(x & 0xFF000000) || !(0x000000FF ^ (x & 0x000000FF))){
        printf("1\n");
        return 1;
    }else{
        printf("0\n");
        return 0;
    }
}

void main(){
    assert(test(0xFFFFFFFF) == 1);
    assert(test(0x00000000) == 1);
    assert(test(0xf000f0ff) == 1);
    assert(test(0x00f0f00f) == 1);
}
