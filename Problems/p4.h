/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ¡Á 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#pragma once
#include <iostream>

bool IsPalind( const char* p, int length )
{
	if ( length <= 0 )
	{
		return false;
	}

	for( int index = 0; index < (length / 2); ++index )
	{
		if ( p[index] != p[length - index - 1])
		{
			return false;
		}
	}

	return true;
}

__int64 Getpalindrome()
{
	int maxvalue = 100 * 100;
	int value = 0;
	char valuetemp[10] = { 0 };
	for( int index = 999; index > 100; --index )
	{
		for( int temp = index; temp > 100; --temp )
		{
			value = index * temp;

			itoa( value, valuetemp, 10 );
			std::string str( valuetemp );
			if ( IsPalind( str.c_str(), str.length() ))
			{
				if ( value> maxvalue )
				{
					maxvalue = value;
				}
			}
		}
	}

	return maxvalue;
}
