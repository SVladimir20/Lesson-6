#include <iostream>
#include <cstdlib>
using namespace std;
void PointerA(const size_t D1, const size_t D2, int **pA);
void FilFunc(const size_t D1, const size_t D2, int **pA);
int main()
{
	const size_t D1 = 4;
	const size_t D2 = 4;
	int **pA;
	pA = new int *[D1];
	PointerA(D1, D2, pA);
	FilFunc(D1, D2, pA);
	return 0;
}
void PointerA(const size_t D1, const size_t D2, int **pA)
{
	for (size_t i = 0; i < D1; i++)
	{
		pA[i] = new int[D2];
	}
}
void FilFunc(const size_t D1, const size_t D2, int **pA)
{
	for (size_t i = 0; i < D1; i++)
	{
		for (size_t j = 0; j < D2; j++)
		{
			pA[i][j] = rand();
			cout << pA[i][j] << " ";
		}
	}
}