#include "Libraries.h"
#include "Prototypes.h"

float findOddSum(float *arr, int n)
{
	float oddSum = 0;
	for (int temp = 0; temp < n; temp++)
	{
		if (temp % 2 == 0)
		{
			oddSum += arr[temp];
		}
	}
	return oddSum;
}