/*Write a program to count the occurrence of a given character in a string.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Hello i am a beginner C learner";
    char word;
    printf("Enter character to be count: \n");
    scanf("%c",&word);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == word)
        {
            count++;
        }
        
    }
    printf("The number of occurence of character %c in string is %d\n",word,count);
    
return 0;
}