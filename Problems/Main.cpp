
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"
#include "p6.h"
#include <iostream>
using namespace std;

#define PRINGMSG(msg) ( std::cout << msg << std::endl )
int main()
{
	__int64 value = GetPrimeNum();
	PRINGMSG( value );

	system("pause");
	return 0;
}

