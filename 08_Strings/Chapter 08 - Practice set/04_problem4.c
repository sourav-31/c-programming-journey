/*Write a program to encrypt a string by adding 1 to the ascii value of its
characters.*/

#include <stdio.h>
int length(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;    
}
void encrypt(char str[]){
    for (int i = 0; i < length(str); i++)
    {
        str[i] = str[i] + 1; //arithmatic in string is based on its ascai values
    }
}

int main(){
    char str[] = "Sourav";
    encrypt(str);
    printf("The encrypted string is %s", str);
    
return 0;
}