// SquareRoots.cpp : Defines the entry point for the application.
//

#include <iostream>

#include "sqrt.h"
#include <cmath>

using namespace std;

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


	cout << "Hello CMake." << endl;
	return 0;
}
