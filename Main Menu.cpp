#include "Libraries.h"
#include "Prototypes.h"

int menu()
{
	system("cls");
	cout << "Лабораторная работа №1, вариант 4.\nВ этой работе представлены решения для семинаров №3, №4, №5.\n\nПожалуйста, введите номер нужного семинара или 0 для завершения работы программы: ";
	char flag = 0;
	cin >> flag;

	if (isdigit(flag))
	{
		switch (flag)
		{
		case '3':
			cout << "Запуск семинара №3...";
			Sleep(1000);
			launchSeminar3();
			break;
		case '4':
			cout << "Запуск семинара №4...";
			Sleep(1000);
			launchSeminar4();
			break;
		case '5':
			cout << "Запуск семинара №5...";
			Sleep(1000);
			launchSeminar5();
			break;
		case '0':
			return 0;
		default:
			cerr << "Некорректный номер. Перезапуск...";
			Sleep(2000);
			break;
		}
	}
	else
	{
		cerr << "Некорректный номер. Перезапуск...";
		Sleep(2000);
	}
	return -1;
}