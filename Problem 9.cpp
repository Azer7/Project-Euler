// Problem 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	while (a + b + c != 1000)
	{
		for (b = 0; b < 1000; b++)
		{
			for (a = 0; a < b; a++)
			{
				c = sqrt(a*a + b*b);
				if (c*c == a*a + b*b)
				{
					//triplet!
					if (a + b + c == 1000)
						break; //found
				}
			}
		}
	}
    return 0;
}

