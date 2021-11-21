#include "Libraries.h"
#include "Prototypes.h"

float findNegativeSum(float *arr, int n)
{
	int startIndex = findStartIndex(arr, n);
	int endIndex = findEndIndex(arr, n);
	float negativeSum = 0;
	for (int temp = startIndex + 1; temp < endIndex; temp++)
	{
		negativeSum += arr[temp];
	}
	return negativeSum;
}