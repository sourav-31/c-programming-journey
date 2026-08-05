#include <stdio.h>
int length(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;    
}

void mystrcpy(char target[], char source[]){
    for (int i = 0; i < length(source); i++)
    {
        target[i] = source[i];
    }
    
}
int main(){
    char source[] = "Sourav";
    char target[30];
    mystrcpy(target,source); //target should contain Sourav 
    printf("The target string is %s\n",target);
return 0;
}