/*Write a program to check whether a given character is present in a string or not*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello i am a beginner C learner";
    char word;
    printf("Enter character to be checked: \n");
    scanf("%c", &word);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == word)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("The character %c is not present in the string", word);
    }
    else
    {
        printf("The character %c is present in string %d times\n", word, count);
    }

    return 0;
}