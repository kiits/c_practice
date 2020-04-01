#include<stdio.h>
#include <assert.h>
#include <limits.h>

int bad_int_size_id_32(){
    
    int set_msb = 1 << 31;
    set_msb = set_msb << 31;
    set_msb = set_msb << 1;
    int beyond_msb = 1 << 2;
    beyond_msb = beyond_msb << 31;
    beyond_msb = beyond_msb << 31;
    return set_msb && !beyond_msb;
    //return INT_MIN == 0x8000000000000000;
}
void main(){
    //bad_int_size_id_32();
    assert(!bad_int_size_id_32());
}
