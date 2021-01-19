#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	printf("The number of the half pyramid: ");
	scanf_s("%d", &n);

	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%d", j);
			}
			printf("\n");
		}
	}
	
	char c;
	printf("The letter of the half pyramid: ");
	scanf_s(" %c", &c, 1);

	if ('A' <= c && c <= 'Z')
	{
		for (int i = 'A', step = 1; i <= c; i++)
		{
			for (int j = 1; j <= step; j++)
			{
				printf("%c", i);
			}
			printf("\n");
			step++;
		}
	}

	return 0;
}