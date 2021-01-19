#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	while (n < 0)
	{
		cout << "Error! Input cannot be negative.\n";
		cin >> n;
	}

	int i = n;
	while (i >= -n)
	{
		cout << (i > 0 ? i : -i) << " ";
		i--;
	}

	return 0;
}