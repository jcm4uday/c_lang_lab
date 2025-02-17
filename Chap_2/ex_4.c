/*Write an alternative version of squeeze(s1,s2) that deletes each character in 
s1 that matches any character in the string s2.*/
#include <stdio.h>

#define SIZE_ONE    100U
#define SIZE_TWO    100UL

void squeeze(char s1[], char s2[]);

int main(){
    // char s1[SIZE_ONE], s2[SIZE_TWO];

    char s1[SIZE_ONE] = "Happy sir";
    char s2[SIZE_TWO] = "dir";



    squeeze(s1, s2);
    printf("%s\n", s1);


}

void squeeze(char s1[], char s2[]){
    int i = 0;
    int j = 0;
    for(i=0; s1[i] != '\0'; i++){
        for(j=0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                s1[i] = ' ';
            }

        }
    }
}