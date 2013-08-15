/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#pragma once
#include <iostream>

__int64 GetLargestFactor( __int64 num )
{
	__int64 factor = 0;
	__int64 value = num;

	for( __int64 index = 2; index <= num; )
	{
		if ( index == num  )
		{
			factor = index;
			break;
		}
		if ( (num % index) == 0 )	// ÄÜÕû³ý
		{
			num = num / index;
			continue;
		}

		++index;
	}

	return factor;
}