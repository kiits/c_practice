#include <stdio.h>
#include <stdint.h>

typedef __int128 int128_t;

void t(int128_t *d, int x, int64_t y){
    *d = x * (int128_t) y;
}

//int main(){
//    int128_t *aa = 0;
//    t(aa, -1, 2);
//    printf("%x\n", *((unsigned *) aa));
//    printf("%x\n", *((unsigned *) aa + 1));
//    return 1;
//}
