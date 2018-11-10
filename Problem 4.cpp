// Problem 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int largest = 0;
	int current = 0;
	int a = 100, b = 100;
	vector<int> digits;
	for (; a <= 999; a++)
	{
		for (b = 100; b <= 999; b++)
		{
			current = a * b;
			if (current > largest)
			{
				int  tempCurrent = current;
				while (tempCurrent > 0)
				{
					digits.push_back(tempCurrent % 10);
					tempCurrent /= 10;
				}
				int size = digits.size();
				bool palindrome = true;
				for (int i = 0; i < (size + 1) / 2; i++)
				{
					if (!(digits[i] == digits[size - i - 1]))
						palindrome = false;
				}
				if (palindrome)
					largest = current;
				digits.clear();
			}
		}
	}
	return 0;
}

