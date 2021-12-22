#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Mul(int* a, int* b, const int size, int i)
{
	if (i < size)
		return pow(a[i],2) * pow(b[i],2) + Mul(a, b, size, i + 1);
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL)); 

		const int n = 5;
	int a[n], b[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	cout << "a*b = " << Mul(a, b, n, 0) << endl;
	return 0;
}