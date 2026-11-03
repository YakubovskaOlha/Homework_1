#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	const int size = 20;
	unsigned int arrayOfInt[size];

	srand(time(0));

	cout << "Array of numbers: ";

	for (int i = 0; i < size; i++)
	{
		arrayOfInt[i] = rand() % 10 + 1;
		cout << arrayOfInt[i] << " ";
	}
	
	unsigned int userNumber = 0;
	cout << "\nEnter an integer for comparisn: ";
	cin >> userNumber;

	cout << "Numbers that are bigger than " << userNumber << ":\n";

	for (int i = 0; i < size; i++)
	{
		if (userNumber < arrayOfInt[i]) 
		{
			cout << arrayOfInt[i] << "\n";
		}
	}

	return 0;
}