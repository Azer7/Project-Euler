// Problem 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	long long triangleNumber = 0;
	int number = 1;
	short divisors = 0;
	long long divisor = 0;
	short maxDivisors = 0;
	do
	{
		triangleNumber = 0;
		number += 2;
		for (int i = 1; i <= number; i++)
		{
			triangleNumber += i;
		}
		divisors = 0;
		divisor = 1;
		while (divisors <= 500 && divisor <= triangleNumber)
		{
			if (triangleNumber % divisor == 0)
				divisors++;
			if (divisor > triangleNumber / 2 && divisor != triangleNumber)
			{
				divisors++;
				break;
			}
			else
				divisor++;
		}
		if (divisors > maxDivisors)
			maxDivisors = divisors;
	} while (divisors <= 500);

	return 0;
}

