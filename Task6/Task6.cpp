#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool isPrime = true;
	if (n > 0)
	{
		cout << 2 << " ";
		n--;
	}

	for (int i = 3; n > 0; i += 2)
	{
		for (int j = 2; j < i; j++)
		{
			isPrime = true;
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
			if (isPrime && j == i - 1) {
				cout << i << " ";
				n--;
			}
		}
	}

	return 0;
}