/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{
	int i = 1;
	int oct=0;
	while (num > 0)
	{
		oct = oct+(num % 8)*i;
		num = num / 8;
		i=i*10;
	}
	return oct;
}

float decimalToOctalFraction(float num)
{
	int n,b,i=1;
	float f,octfl;
	n = int(num);
	f = num - n;
	b=decimalToOctal(n);
	while (f != 0)
	{

		f = f * 8;
		f = int(f)*0.1;
	}
	octfl = b + f;
	return octfl;
}
	

