#include "Libraries.h"
#include "Prototypes.h"

int findStartIndex(float *arr, int n)
{
	int startIndex = -1;
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			startIndex = temp;
			break;
		}
	}
	return startIndex;
}

int findEndIndex(float *arr, int n)
{
	int endIndex = -1;
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			endIndex = temp;
		}
	}
	return endIndex;
}