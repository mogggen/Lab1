#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!\n";

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Hello World!\n";
	}

	int index = 0;
	cin >> n;
	while (index < n)
	{
		cout << "Hello World!\n";
		index++;
	}

	index = 0;
	cin >> n;
	do
	{
		cout << "Hello World!\n";
		index++;
	} while (index < n);

	return 0;
}