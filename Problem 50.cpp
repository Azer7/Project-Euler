// Problem 50 - C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> primes;
	primes.push_back(2);
	int k = 0;
	for (long i = 3; i <= 1000000; i += 2)
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
			primes.push_back(i);
	}

	long currentPrimeSum = 0;
	int currentConsecutiveIndex = 0;
	long longestPrimeSum = 0;
	int longestConsecutiveIndex = 0;
	int lowerPrimeIndex = 0;

	for (long currentStartingPrimeIndex = 0; currentStartingPrimeIndex < 10000; currentStartingPrimeIndex++)
	{
		currentPrimeSum = 0;
		currentConsecutiveIndex = 0;
		lowerPrimeIndex = 0;
		for (int i = currentStartingPrimeIndex; currentPrimeSum < 1000000; i++)
		{
			currentPrimeSum += primes[i];
			currentConsecutiveIndex++;
			for (int j = lowerPrimeIndex; j < primes.size() - 1; j++)
			{
				if (primes[j] > currentPrimeSum)
					break;
				else if (primes[j] < currentPrimeSum)
					lowerPrimeIndex = j;
				else if(currentConsecutiveIndex > longestConsecutiveIndex)
				{
					longestPrimeSum = currentPrimeSum;
					longestConsecutiveIndex = currentConsecutiveIndex;
				}
			}
		}
	}



	return 0;
}

