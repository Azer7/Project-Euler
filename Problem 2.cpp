// Problem 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	long long last = 1, current = 2;
	long long total = 0;
	long long lastTemp = 0;
	while (current < 4000000)
	{
		if (current % 2 == 0)
			total += current;
		
		lastTemp = current;
		current = current + last;
		last = lastTemp;
	}
	return 0;
}

