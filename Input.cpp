#include "Libraries.h"
#include "Prototypes.h"

/*====================SEMINAR 3======================*/
int inputArrayLenght(int lenght)
{
	cout << "Введите количество элементов массива: ";
	lenght = 0;
	cin >> lenght;
	cin.clear();  // используется для превращения
	cin.ignore(); // нечисловых символов в 0

	int flag = 0;
	flag = checkInputArrayLenght(lenght);
	switch (flag)
	{
	case 1:
		cerr << "Неверное число элементов. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 2:
		cerr << "Только один элемент. Вычислить сумму невозможно. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 3:
		cerr << "Недостаточное количество элементов. Вычислить сумму невозможно. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 0:
		return lenght;
	default:
		cerr << "Неизвестная ошибка. Повторите ввод." << endl;
		system("pause > nul");
		break;
	}
	return -1;
}

int inputArray(float *arr, int n)
{
	cout << "Задан размер массива - " << n << endl;
	cout << "Введите элементы массива: ";
	for (int temp = 0; temp < n; temp++)
	{
		cin >> arr[temp];
		cin.clear();
		cin.ignore();
	}

	int flag = 0;
	flag = checkInputArray(arr, n);
	switch (flag)
	{
	case 1:
		cerr << "Нет отрицательных элементов. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 2:
		cerr << "Только один отрицательный элемент. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 3:
		cerr << "Два отрицательных элемента подряд. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 4:
		cerr << "Между отрицательными элементами только одно число. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 0:
		return 0;
	default:
		cerr << "Ошибка ввода. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	}
	return -1;
}

/*====================SEMINAR 4======================*/
int inputMatrixSize(int size)
{
	cout << "Введите размерность квадратной матрицы: ";
	cin >> size;
	cin.clear();
	cin.ignore();

	int flag = 0;
	flag = checkInputMatrixSize(size);
	switch (flag)
	{
	case 1:
		cerr << "Размер матрицы не может быть меньше или равен нулю. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 2:
		cerr << "Размер матрицы не может быть равен единице. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 3:
		cerr << "Размер матрицы не может быть равен двум, так как нужно вычислить сумму диагоналей. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 0:
		return size;
	default:
		cerr << "Некорректный размер. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	}
	return -1;
}

int inputMatrix(int **matrix, int size)
{
	cout << "Задан размер матрицы - " << size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Введите элементы " << i + 1 << " строки матрицы: ";
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
			cin.clear();
			cin.ignore();
		}
	}

	int flag = 0;
	flag = checkInputMatrix(matrix, size);

	switch (flag)
	{
	case 1:
		cerr << "В матрице нет строк без отрицательных элементов. Невозможно вычислить произведение. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	case 0:
		return 0;
	default:
		cerr << "Ошибка ввода. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	}
	return -1;
}