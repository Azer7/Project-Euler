// Problem 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	long i = 2;
	while (!(i % 19 == 0 && i % 17 == 0 && i % 13 == 0 && i % 11 == 0 && i % 7 == 0 && i % 5 == 0 && i % 9 == 0 && i % 16 == 0))
	{
		i += 2;
	}
    return 0;
}

