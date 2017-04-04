// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T max(const T& t1, const T& t2)
{
	return t1 < t2 ? t2 : t1;
}

int max(int argc, _TCHAR* argv[])
{
	cout << "max of 33 and 44 is " << max(33, 44) << endl;

    return 0;
}

