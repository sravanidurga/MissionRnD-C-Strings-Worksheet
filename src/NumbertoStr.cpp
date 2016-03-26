/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include<stdio.h>
int pow(int b, int e)
{
	int i, power = 1;
	for (i = 1; i <= e; i++)
		power *= b;
	return power;
}
void reverse(char *str, int len)
{
	int i = 0, j = len - 1;
	char temp;
	while (i < j)
	{
		temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		i++;
		j--;
	}
	*(str + len) = '\0';
}
void number_to_str(float number, char *str, int afterdecimal){
	int num,  i = 0,flag=0;
	float decimal;
	int decim;
	if (number < 0)
	{
		number = -number;
		flag++;
	}
	num =(int)number;
	decimal = number - num;
	
	decim = (int)(decimal*pow(10, afterdecimal));
	while (decim)
	{
		*(str + (i++)) = (decim % 10) + '0';
		decim = decim / 10;
	}
	if (i != 0)
		*(str + (i++)) = '.';
	while (num)
	{
		*(str + (i++)) = num % 10 + '0';
		num = num / 10;
	}
	if (flag == 1)
		*(str + (i++)) = '-';
	*(str + i) = '\0';
	reverse(str, i);
}
