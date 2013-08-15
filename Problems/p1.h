/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#pragma once
#include <iostream>

int P1( int max )
{
	int sum = 0;
	// 3
	for ( int index = 3; index < 1000; index += 3)
	{
		if ( (index % 3) == 0 )
		{
			sum += index;
		}
	}

	for( int index = 5; index < 1000; index += 5 )
	{
		if ( ((index % 5) == 0 )
			&& ((index % 3) != 0) )
		{
			sum += index;
		}
	}

	return sum;
}