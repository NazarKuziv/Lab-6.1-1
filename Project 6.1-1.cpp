// Lab_05_1.cpp
// < Кузів Назар >
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним способом
// Варіант 6


#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const  int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}

void Sum(int* b, const int size, int& S, int& k)
{
	for (int i = 0; i < size;  i++)
		if (!(b[i] > 0 && b[i] % 5 == 0))
		{
			S += b[i];
			k++;
			b[i] = 0;
		}
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 22;
	int b[n];

	int Low = -40;
	int High = 50;

	Create(b, n, Low, High);
	
	cout << setw(4) << "b[] = {";

	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << b[i] << "," ;
		
		}
	cout << "}" << endl;
	cout << endl;

	int S = 0;
	int k = 0;

	Sum(b, n, S, k);

	cout << "Number ="  << k << endl;
	cout << setw(4) << "Sum = " << S << endl;
	cout << endl;
	cout << setw(4) << "b[] = {";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << b[i] << ",";
	}
	cout << "}" << endl;




	return 0;

}