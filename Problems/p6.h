
/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#pragma once
#include <iostream>
#include <vector>

__int64 GetPrimeNum()
{
	std::vector<__int64>		valueVector;
	__int64 value = 0;
	int index = 1;
	__int64 indexValue = 2;
	valueVector.reserve( 10002 );
	valueVector.push_back( 2 );

	while( 1 )
	{
		++indexValue;
		bool bok = true;
		for( auto itor = valueVector.begin();
			itor != valueVector.end();
			++itor )
		{
			if ( indexValue % (*itor) == 0 )
			{
				bok = false;
				break;
			}
		}

		if ( bok )
		{
			++index;
			valueVector.push_back( indexValue );

			if ( index == 10001 )
			{
				break;
			}
		}
	}

	value = *(valueVector.rbegin());

	return value;
}