#include "Prime.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void isPrime(vector<int>&, int*);

int main()
{
	int HowMany = 0;
	int* HowManyPointer = &HowMany;
	cout << "This will show all the prime numbers between 0 and 1,000,000" << endl;
	HowMany = 78498; //78498
	vector<int>PrimeNumberVector;

	for (int i = 0; i <= HowMany; i++)
	{
		PrimeNumberVector.push_back(i);
		if (i == 78498)
		{
			break;
		}
	}

	isPrime(PrimeNumberVector, HowManyPointer);

	system("pause");
	return 0;
}


void isPrime(vector<int>& PrimeNumberVector, int* HowManyPointer)
{

	for (int i = 2; i < *HowManyPointer; i++)
	{

		for (int j = 0; j < *HowManyPointer; j++)
		{
			if (2 > PrimeNumberVector[j])
			{
			cout << endl;
			}
			else if (PrimeNumberVector[j] % i == 0)
			{
				cout << "Prime number: " << PrimeNumberVector[j] << endl;
			}
			else cout << endl;

		}
	}
}
