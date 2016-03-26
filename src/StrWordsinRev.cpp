/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char  * a, int i, int j)
{
	while (j <= i)
	{
		char temp;
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		j++; i--;
	}
}

void str_words_in_rev(char *input, int len){
	int i = 0, j = 0;
	if (input == "" || input == NULL)
		return ;
	for (i = 0; *(input + i); i++)
	{
		if (*(input + i) == ' ' || *(input + (i + 1)) == '\0')
		{
			if (*(input + i) == ' ')
			{
				reverse(input, i - 1, j);
				j = i + 1;
			}
			else
			{
				reverse(input, i, j);
				j = i + 1;
			}

		}
	}
	reverse(input, i - 1, 0);
	
}
