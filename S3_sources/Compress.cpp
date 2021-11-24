#include "Libraries.h"
#include "Prototypes.h"

void swap(float *arr, int i, int j)
{
	float tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

float* compressArray(float *arr, int n)
{
	for (int temp = 0; temp < n; temp++)
	{
		if (fabs((double)arr[temp]) < 1)
		{
			arr[temp] = 0;
		}
	}
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; j < n; j++)
	{
		if (arr[j] != 0)
		{
			if (i < j)
			{
				swap(arr, i, j);
			}
			i++;
		}
	}
	return arr;
}