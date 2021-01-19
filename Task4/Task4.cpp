#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string Name;
	int Age;
	char Gender;
	string Adress;
	bool Married;
	float Height;

	cout << "What's your name: ";
	cin >> Name;

	cout << "How old are you: ";
	cin >> Age;

	cout << "Are you a man or woman(M/F): ";
	cin >> Gender;

	cout << "Where do you live (streetname_number): ";
	cin >> Adress;

	cout << "Are you married(0/1): ";
	cin >> Married;

	cout << "How tall are you(in cm): ";
	cin >> Height;

	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Gender: " << (Gender == 'M' ? "Male" : "Female") << endl;
	cout << "Adress: " << Adress << endl;
	cout << "Married: " << (Married ? "yes" : "no") << endl;
	cout << "Height: " << Height << endl;

	return 0;
}