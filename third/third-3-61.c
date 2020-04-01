#include<stdio.h>
#include <assert.h>
#include <limits.h>

long cread(long *xp){
    long res = 0;
    int test = xp != 0;
    if(test){
        res = *xp;
    }
    return res;
}
// 书里的条件转移就不成功
//long cmdiff(long x, long y){
//    long rval = y-x;
//    long eval = x-y;
//    long ntest = x >=y;
//    if (ntest) rval = eval;
//    return rval;
//}
//void main(){
//    long *x = 0;
//    cread(x);
//}
