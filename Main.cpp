// TODO: сделать свитчи для выбора задания;
//  сделать возврат массива по указателю;
// после сортировки указать оба массива;

#include "Libraries.h"
#include "Prototypes.h"

int main()
{
	system("chcp 65001"); //установка кодировки UTF-8

	int code = 0;
	do
	{
		code = menu();
	} while (code == -1);

	return 0;
}
