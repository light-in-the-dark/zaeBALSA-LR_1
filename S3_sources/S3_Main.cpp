#include "Libraries.h"
#include "Prototypes.h"

void launchSeminar3()
{
	system("cls");
	getInfo(3);
	
	int n = 0; //длина массива
	do
	{
		n = inputArrayLenght(0);
	} while (n == -1);

	float *array = new float[n];
	int arrIsValid = 0; // для проверки массива на корректность
	arrIsValid = inputArray(array, n);
	while (arrIsValid == -1)
	{
		delete[] array;
		float *array = new float[n];
		arrIsValid = inputArray(array, n);
	}

	float oddSum = findOddSum(array, n);
	float negSum = findNegativeSum(array, n);
	
	compressArray(array, n);
	
	arrayOutput(array, n, oddSum, negSum);
	
	delete[] array;
	cout << "Программа успешно завершена. Для выхода в меню нажмите любую клавишу..." << endl;
	cin.get();
}
