#include <stdio.h>

int lower(char c);

int main(){

    char tem;

    tem = 'B';

    printf("%c\n", lower(tem));

    return 0;
}

/* lower:  convert c to lower case; ASCII only */ 
int lower(char c) 
{ 
    if (c >= 'A' && c <= 'Z') 
        return c + 'a' - 'A'; 
    else 
        return c; 
} 