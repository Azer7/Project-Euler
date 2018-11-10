// Problem 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	vector<int> primes;
	primes.push_back(2);
	int k = 0;
	long long total = 2;
	for (long i = 3; i < 2000000; i += 2)
	{
		k = floor(sqrt((i)));
		bool prime = true;
		for (int y = 0; y < primes.size(); y++)
		{
			if (primes[y] > k)
				break;
			else if (i % primes[y] == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime == true)
		{
			primes.push_back(i);
			total += i;
		}
	}
	cout << total;
	return 0;
}

