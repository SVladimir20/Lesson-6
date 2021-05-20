#include <iostream>
#include <cmath>
using namespace std;
int Size;
void FilFunc(int Size, int *pA)
{
	for (size_t i = 0; i < Size; i++)
	{
		pA[i] = pow(2, i);
		cout << pA[i] << " ";
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива: ";
	cin >> Size;
	int *pA = new int[Size];
	if (Size > 0)
	{
		FilFunc(Size, pA);
	}
	else
	{
		cout << "Такой массив не существует.";
	}
	delete[] pA;
	pA = nullptr;
	return 0;
}