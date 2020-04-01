#include<stdio.h>
#include <assert.h>
#include <limits.h>

#define SIZE 32

void over(){
    printf("over \n");
}
void main(){
    char input[SIZE];
    while(1){
        char *p = fgets(input, SIZE, stdin);
        if (p==NULL){
            break;
        }
        printf("%s\n", input);
    }
    return;
}
