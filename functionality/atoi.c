#include <stdio.h>


#define SIZE 20
#define LOOP_INT 0

int atoi(char s[]);

int main(){

    char var[SIZE]= {'0', '1', '3', '5', '7', '9'};
    for(int i = LOOP_INT; var[i] != '\0'; i++){
        // var[i] = i;
        printf("%d\n", var[i]);
    }
     printf("%d\n", atoi(var));
     return 0;

}
/* atoi:  convert s to integer */ 
int atoi(char s[]) 
{ 
    int i, n; 

    n = 0; 
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){

        // n = 10 * n + (s[i] - '0'); 
        n = 10 * n + (s[i] - '0');
        // printf("%d\n", n);
    }

    return n; 
} 