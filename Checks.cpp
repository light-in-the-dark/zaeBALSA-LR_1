#include "Libraries.h"
#include "Prototypes.h"

int checkInputArrayLenght(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 2;
	}
	else if (n == 2 || n == 3)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

int checkInputArray(float *arr, int n)
{
	int startIndex = findStartIndex(arr, n);
	int endIndex = findEndIndex(arr, n);
	int amountOfNeg = 0; //количество отрицательных элементов
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			amountOfNeg++;
		}
	}

	if (amountOfNeg == 0)
	{
		return 1;
	}
	else if (amountOfNeg == 1)
	{
		return 2;
	}
	else if (endIndex - startIndex == 1)
	{
		return 3;
	}
	else if (endIndex - startIndex == 2)
	{
		return 4;
	}
	else
	{
		return 0;
	}
}

int checkInputMatrixSize(int size)
{
	if (size <= 0)
		return 1;
	else if (size == 1)
		return 2;
	else if (size == 2)
		return 3;
	else
		return 0;
}

int checkInputMatrix(int **matrix, int size)
{
	int countOfNotNegRows = findAmountOfNegRows(matrix, size);

	if (countOfNotNegRows == size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}