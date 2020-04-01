#include<stdio.h>

void show_short(){
    short s = 35533;
    int size = sizeof(s);
    unsigned char *hex = (unsigned char *)&s;
    int i;
    for(i = 0; i < size; i++){
        printf("%.2x ", hex[i]);
    }
    printf("\nsize of hex = %d \n", size);
}
void main(){
    show_short();
}
