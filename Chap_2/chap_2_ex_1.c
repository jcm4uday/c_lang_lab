/*Exercise 2-1. Write a program to determine the ranges of char, short, int, and long 
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.*/
#include <stdio.h>
#include <limits.h>     /*The header <limits.h> defines constants for the sizes of integral types.*/
#include <float.h>      /**/

int main(){

    printf("Signed number ranges\n");
    printf(" max and min size of char is:- Max:%d and Min:%d\n", CHAR_MAX, CHAR_MIN);
    printf(" max and min size of int is:- Max:%d and Min:%d\n", INT_MAX, INT_MIN);
    printf(" max and min size of short is:- Max:%d and Min:%d\n", SHRT_MAX, SHRT_MIN);
    printf(" max and min size of long is:- Max:%ld and Min:%ld\n", LONG_MAX, LONG_MIN);
    printf("unsigned number ranges\n");
    printf(" max size of unsigned char is:- Max:%d\n", UCHAR_MAX);
    printf(" max size of unsigned short is:- Max:%d\n", USHRT_MAX);
    printf(" max size of unsigned int is:- Max:%d\n", UINT_MAX);
    printf(" max size of unsigned long is:- Max:%ld\n", ULONG_MAX);
    printf("floating number ranges\n");
    printf(" max and min size of float  is:- Max:%.9f and Min:%.9f\n", FLT_MAX, FLT_MIN);
    printf(" max and min size of float double is:- Max:%e and Min:%e\n", DBL_MAX, DBL_MIN);
    
    return 0;
}         