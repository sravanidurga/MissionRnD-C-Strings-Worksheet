/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K) {
	int r = 0, j = 0;
	int i = 0;
	
	if (K < 0 || str=="" || str == NULL)
		return '\0';
	while (*(str + i) != '\0' && i<K)
	{
		r++;
		i++;
	}
	if (r != K)
		return '\0';


		while (*(str + r) != '\0')
		{
			j++;
			r++;
			i = r - 1;
		}
		if (r < K)
			return '\0';

		
	return *(str+(j-1));

	return '\0';
}
