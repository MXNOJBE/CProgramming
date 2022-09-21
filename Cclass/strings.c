#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char str[50];
	char check[50];
	printf("\nEnter a sentence: ");
	gets(str);
	printf("\nEnter the word to check if it is present: ");
	scanf("\n%s", check);
	int i, j, c = 0, word = 0, vowel = 0;
	char *chk;
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
		if (str[i] == ' ')
			word++;
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			vowel++;
	}
	chk = strpbrk(str, check);
	if (chk != 0)
	{
		printf("\nYou entered %s it is present in %s", check, str);
	}
	else
		printf("\nYou entered %s it is not present in %s", check, str);
	printf("\nThe length of the string is : %d", c);
	printf("\nThe number of words in the sentence is : %d", (word + 1));
	printf("\nThe number of vowels in the sentence is: %d", vowel);
}