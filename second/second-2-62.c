#include<stdio.h>
#include <assert.h>

int int_shift_are_arithmetic(){
    int a = -1;
    if(a >> 1 == -1)
        return 1;
    else
        return 0;
}

void main(){
    assert(int_shift_are_arithmetic() == 1);
    printf("success\n");
}
