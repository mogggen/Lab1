#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char name[64];
	int age;
	char gender;
	char adress[64];
	int married;
	float height;

	printf("What's your name: ");
	scanf_s("%63s", name, sizeof name);

	printf("How old are you: ");
	scanf_s("%d", &age);

	printf("What's your gender(M/F): ");
	scanf_s(" %c", &gender, 1);

	printf("Where do you live(streetname_number): ");
	scanf_s("%63s", adress, sizeof adress);

	printf("Are you married(1/0): ");
	scanf_s("%d", &married);

	printf("How tall are you (in cm): ");
	scanf_s("%f", &height);

	printf("Name: %s", name);
	printf("Age: %d", age);
	printf("Gender: %s", (gender == 'M' ? "Male" : "Female"));
	printf("Adress: %s", adress);
	printf("Married: %s", (married == 1 ? "yes": "no"));
	printf("Height: %f cm", height);

	
	return 0;
}