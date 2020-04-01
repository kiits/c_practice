#include<stdio.h>

void main(){
    unsigned int x = 0x123A;
    unsigned int y = 0xCA422;
    unsigned char *hx = (unsigned char *)&x;
    unsigned char *hy = (unsigned char *)&y;
    int i;
    ////printf("%d", sizeof(x));
    hy[0] = hx[0];
    for(i = sizeof(x) - 1; i >= 0; i--){
        printf("%.2x ", hy[i]);
    }
    printf("\n");
}
