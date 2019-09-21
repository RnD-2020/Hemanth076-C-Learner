/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	int f1 = 0, f2 = 0,i=0;
	int ar[500];
	while (n > 0)
	{
		if (n == 1)
		{
			ar[i + 1] = f1;
		}
		i++;


		 if (n == 2)
			ar[i + 2] = f2;
		i++;
		 if (n < 3)
		{
			for (int j = 3; j <= n; j++)
			{
				int f = f1 + f2;
				f1 = f2;
				f2 = f;
				ar[i] = f;
				i++;
			}
		}
		
	}
	if (n == i)
		return ar[i];

}

int nthPrime(int num)
{
	int ar[500];
	int i = 1;int  count = 0,j;
	for (i = 1; i <=num; i++) {
		for (j = 1; j <= num; j++)
		{
			if (num%j == 0)
				count++;
			if (count == 2)
				ar[i] = j;
		}
	}
	return ar[num];
			
		
	
}