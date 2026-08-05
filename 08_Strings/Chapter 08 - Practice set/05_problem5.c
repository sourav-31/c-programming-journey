/*Write a program to decrypt the string encrypted using decrypt function*/
#include <stdio.h>
int length(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;    
}

void decrypt(char X[]){
    for (int i = 0; i < length(X); i++)
    {
        X[i] = X[i] - 1;
    }
    
}
int main(){
    char str[] = "Tpvsbw";
    decrypt(str);
    printf("The  decrypted string is %s\n",str);
return 0;
}