/*Write a function setbits(x,p,n,y) that returns x with the n bits that begin at 
position p set to the rightmost n bits of y, leaving the other bits unchanged. */
#include <stdio.h>

int setbits(int x, int p, int n, int y);

void main(){

    int x = 182;
    int p = 4;
    int n = 3;
    int y = 18;
    // setbits(x,p,n,y);
    printf("%d\n", setbits(x,p,n,y));
}

int setbits(int x, int p, int n, int y){

    return((x >> (p-n)) | ((y >> n) );
}