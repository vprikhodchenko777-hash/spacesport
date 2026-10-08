#include <iostream>
#include <windows.h>
using namespace std;

void printTitle()
{
    std::cout << "=========================" << std::endl;
    std::cout << "           TITLE         " << std::endl;
    std::cout << "=========================" << std::endl;
}

void printCrew()
{
    // TODO Owner
}

void  printStatus()
{
    std::cout << "Мы всем рады" << std::endl;
}


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printTitle();
    printStatus();
    printCrew();

    return 0;
}

/*
Завдання: «Таверна»

пара: Власник (Owner) + Колега (Collaborator)

Ролі:
1. Власник створює проєкт, запрошує колегу, зливає PR і вирішує конфлікти.
2. Колега працює у своїй гілці й проходить рев'ю. Потім міняються ролями.

Етап 1. Підготовка (Власник):
1. Створити консольний проєкт Tavern, вставити стартовий код.
2. Створити репозиторій: Git Changes → Create Git Repository → вибрати акаунт → Create and Push.
3. На GitHub: Settings → Collaborators → Add people → вписати username колеги.
4. Колега приймає запрошення (лист, або github.com/<логін>/Tavern/invitations).

Етап 2. Клонування і гілки
Колега: Git → Clone Repository → URL репозиторію.
Власник створює гілку feature-menu, Колега створює feature-greeting.

Етап 3. Робота в гілках
Власник (гілка feature-menu)  
printMenu(): 3 страви з цінами  
printTitle(): змінити назву на "=== ТАВЕРНА 'ЗОЛОТИЙ ДРАКОН' ==="

Колега (гілка feature-greeting)
printGreeting(): кумедне привітання від господаря таверни
printTitle(): змінити назву на "=== ТАВЕРНА 'П'ЯНИЙ ГОБЛІН' ==="

Вимоги:
1. Мінімум 2 коміти з осмисленими повідомленнями, потім Push своєї гілки.
2. Домовленості між собою (хто яку назву обере) на цьому етапі не обговорювати, щоб конфлікт точно виник.

Етап 4. Pull Request, злиття (merge), вирішення конфлікту
Колега: створює PR feature-greeting → main, призначає Власника рев'юером.

Власник:
переглядає Files changed, лишає хоча б один коментар, робить Approve і Merge.
1. Конфліктів не буде, бо printGreeting ніхто більше не чіпав.
2. Тепер Власникова гілка конфліктує з оновленим main у printTitle().

Власник:
перемикається на main → Pull;
перемикається на feature-menu → зливає в неї main (правою кнопкою по main → Merge into current branch);
відкриває Merge Editor і вирішує конфлікт: вони разом домовляються, яка назва таверни лишається (або придумують третю);
Accept Merge → Commit → Push.

Власник:
створює PR feature-menu → main, призначає Колегу рев'юером.

Колега:
робить Approve (автор не може схвалити власний PR). Власник натискає Merge.

Обидва: перемикаються на main, роблять Pull, запускають програму і перевіряють результат.

Етап 5. Зміна ролей «Космопорт»
Створіть новий проект Spaceport (printTitle, printCrew, printStatus).
Усе повторюється, але з іншими акаунтами у ролях.

*/
