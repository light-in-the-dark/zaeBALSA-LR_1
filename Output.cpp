#include "Libraries.h"
#include "Prototypes.h"

/*====================SEMINAR 3======================*/
void arrayOutput(float *arr, int n, float oddSum, float negSum)
{
    cout << "=====================================================================================" << endl;
    cout << "Измененный массив: ";
    for (int temp = 0; temp < n; temp++)
    {
        cout << arr[temp] << " ";
    }
    cout << endl;
    cout << "Сумма элементов с нечетными номерами: " << oddSum << endl;
    cout << "Сумма чисел между отрицательными элементами: " << negSum << endl;
    cout << endl;
}

/*====================SEMINAR 4======================*/
void matrixOutput(int **matrix, int size)
{
    cout << "=====================================================================================" << endl;
    cout << "Введенная матрица:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void prodOutput(int prod, int rowNum)
{
    cout << "Произведение элементов в " << rowNum + 1 << " строке = " << prod << endl;
}

void maxSumOutput(int maxSum)
{
    cout << endl;
    cout << "Максимальная сумма побочных диагоналей = " << maxSum << endl;
    cout << endl;
}

/*====================SEMINAR 5======================*/
char instructionsOutput(char code)
{
    cout << "Рядом с исполняемым файлом программы должен быть быть файл 'textfile.txt' с английским текстом.\nУчтите, что объем одного слова не должен превышать 100 символов.\nХотите ли вы, чтобы программа создала пустой файл сама? (y/n)" << endl;
    cin >> code;

    if (code == 'y')
    {
        textFile('c');
        cout << "Файл успешно создан. Пожалуйста, введите в него свои данные. Затем нажмите любую клавишу для продолжения..." << endl;
        system("pause > nul");
        return 'y';
    }
    else if (code == 'n')
        return 'n';

        return 'e';
}

void wordsResultOutput(int count, char *word)
{
    cout << "=====================================================================================" << endl;
    if (count > 0)
    {
        cout << "Список слов, начинающихся с гласных букв:" << endl;
        cout << count << ") " << word << endl;
    }
    else if (count == 0)
    {
        cout << "Нет слов, начинающихся на гласную букву, либо файл не найден." << endl;
    }
}