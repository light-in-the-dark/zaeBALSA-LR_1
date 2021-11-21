#include "Libraries.h"
#include "Prototypes.h"

void launchSeminar5()
{
    system("cls");
    getInfo(5);

    textFile('c');
    
    instructionsOutput();
    findVowelWords();
    
    textFile('d');
    cout << "Программа успешно завершена. Для выхода в меню нажмите любую клавишу..." << endl;
    system("pause > nul");
}
