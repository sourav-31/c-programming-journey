#include <stdio.h>
int main(){
    char st[] = {'S','O','U','R','A','V','\0'};
    char str[] = "SOURAV"; //same as above line
    printf("The Second character is %c\n",st[1]);
    
    // for(int i= 0; i < 6; i++){
    //     printf("The Character is %c\n",str[i]);
    // }
    printf("%s",str);
return 0;
}