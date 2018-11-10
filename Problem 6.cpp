// Problem 6 - C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	long long sumSquares = 0, squaresSum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sumSquares += i*i;
		squaresSum += i;
	}
	squaresSum *= squaresSum;

	//squaresSum - sumSquares == answer

    return 0;
}

