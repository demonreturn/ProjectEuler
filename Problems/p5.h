/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#pragma once
#include <iostream>

__int64 GetMinBeishu( __int64 a, int b )
{
	if ( a <= 0 ||
		 b <= 0 )
	{
		return 0;
	}

	__int64 max = a;
	__int64 min = b;
	if ( a < b )
	{
		max = b;
		min = a;
	}

	__int64 value = max * min;
	for( int index = max; index <= value; index+=max )
	{
		if ( index % min == 0 )
		{
			return index;
		}
	}

	return value;
}

__int64 GetNum()
{
	__int64 value = 2;
	for( __int64 index = 3; index <= 20; index++ )
	{
		value = GetMinBeishu( value, index );
	}

	return value;
}
