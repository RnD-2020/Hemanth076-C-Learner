/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
int octalToHexadecimal(long int num)
{
	int n, count = 0, m = 0, i = 1,rem=0,hex=0;
		while (1)
		{
			n = num % 10;
			num = num / 10;
			if (num != 0)
				count++;
			for (int i = 0; i < count; i++)
			{
				m = m + pow(8, i);
			}
		}
		while(m>0)
		{
			rem = (m % 16);
			m = m / 16;
			if (rem < 9)
			{
				hex = hex + (rem*i);
			}
			i = i * 10;	
		}
		return hex;
}

float octalToHexadecimalFraction(float num)
{
	return 0.0;
}