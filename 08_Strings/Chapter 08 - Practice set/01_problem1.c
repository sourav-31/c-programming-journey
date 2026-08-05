/*Write your own version of strlen function from <string.h>*/
#include <stdio.h>
int length(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;    
}
int main(){
    char str[] = "Sourav";
    printf("The length of the string is %d\n",length(str));
return 0;
}
