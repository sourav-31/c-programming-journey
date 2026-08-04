#include <stdio.h>
int main(){
    int n;
    printf("Enter number of words\n");
    scanf("%d",&n);
    char p[n];
    printf("Enter word of %d letters\n",n);
    scanf("%s",p);
    printf("The word is %s",p);
return 0;
}