/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
int insert(char *a, int r, int j, int p)
{
	int i;
	
	for (i = j; i <= p; i++)
		*(a + r++) = *(a + i);
	return r;

}
char removeSpaces(char *str) {
	int i, j, p, r=0;
	if (str == "" || str == NULL)
		return '\0';
	for (r = 0; *(str+r); r++)
	{
		if (*(str+r) == ' ' || *(str+r) == '\t')
			break;
	}
	//printf("\n r value is %d",r);
	for (i = 0; *(str+i); i++)
	{
		if (*(str+i) == ' ' || *(str+i) == '\t')
		{
			j = i + 1;
			while (*(str+j))
			{
				if (*(str+j) == ' ' || *(str+j) == '\t')
					j++;
				else
					break;

			}
			//printf("\n j value is %d",j);
			p = j;
			while (*(str+p))
			{
				if (*(str+p) == ' ' || *(str+p) == '\t')
					break;
				else if (*(str+p) == '\0')
				{

					break;
				}
				else
					p++;

			}
			//printf("\n p value is : %d",p);
			i = p - 1;
			r = insert(str, r, j, p - 1);
			//printf("\n r value: %d",r);
		}
		if (*(str+i) == '\0')
			break;

	}
	*(str + r) = '\0';

	return '\0';
}