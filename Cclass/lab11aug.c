#include <stdio.h>
#include <string.h>
int main()
{
    int len = 0, i, wordlen;
    char word[50];
    printf("Enter the Sentence: ");
    scanf("%s", &word);
    for (i = 0; i < len; i++)
    {
        if (word[i] = ' ' || word[i] != '\0')
        {
            len++;
        }
        if (word[i] == ' ')
        {
            wordlen++;
        }

        printf("\nThe length of the wordlen is %d", wordlen);
    }
