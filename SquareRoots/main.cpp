// SquareRoots.cpp : Defines the entry point for the application.
//

#include <iostream>

#include "sqrt.h"
#include <cmath>

using namespace std;

bool test_sqrts(double max);

int main()
{
	auto sr = bssqrt(4);
	auto srb = std::sqrt(4);

	auto sr1 = bssqrt(9);
	auto sr1b = std::sqrt(9);

	auto sr2 = bssqrt(100);
	auto sr2b = std::sqrt(100);

	auto sr3 = bssqrt(103);
	auto sr3b = std::sqrt(103);

	auto sr4 = bssqrt(13);
	auto sr4b = std::sqrt(13);

	auto b = test_sqrts(1000.0);


	cout << "Hello CMake." << endl;
	return 0;
}

bool test_sqrts(double max)
{
	for (double d = 0; d < max; d++)
	{
		auto bsqr_ans = bssqrt(d);
		auto stl_ans = std::sqrt(d);

		if (!real_equals(bsqr_ans, stl_ans, get_precision()))		
		{
			return false;
		}
	}
	return true;
}
