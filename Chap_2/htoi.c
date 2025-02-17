/*Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits 
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 
through 9, a through f, and A through F.*/

#include <stdio.h>

int htoi(char s[]);

void main(){

    char s[] = "0X8E";
    printf("%d\n", htoi(s));
}

int htoi(char n[]){

    int temp[2];
    int size  = 0;
    int var_result = 0;
    int result = 0;
    int j = 0;

    // for(int i=0; n[i] != '\0'; i++){        /* to remove additional 0x or 0X*/
    if((n[0] == '0') && ((n[1] == ('x')) || (n[1] == ('X')))){
        n[0] = n[2];
        n[1] = n[3];
        n[2]  = '\0';
        n[3]  = '\0';
        size = 1;
        // break;
    }

    // }

    for(int i=0; n[i] != '\0'; i++){

        if(((n[i] >= '0') && (n[i] <= '9')))        /* */
        {
            temp [i] = n[i] - '0';
        }
        else if(((n[i] >= 'A') && (n[i] <= 'F'))){
            temp [i] = n[i] - 'A' + 10;
        }
        else if(((n[i] >= 'a') && (n[i] <= 'f'))){
            temp [i] = n[i] - 'a' + 10;
        }
        // size = i;
        printf("temp: %d\n", temp[i]);


    }

    for(int j = 0; j <= size; j++){
        if((size-j))
            var_result = temp[j] * ((16 * (size-j)));
        else
            var_result = temp[j];

        result += var_result;
    }

    printf("Size: %d\n", size);
    return result;
}