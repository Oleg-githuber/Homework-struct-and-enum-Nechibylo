/*
Задание 1
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.

Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.

Спрашивайте пользователя до тех пор, пока он не введёт 0.

Для решения задачи воспользуйтесь перечислением.
*/

#include <iostream>
#include <clocale>

enum class Months
{
    january = 1,
    february,
    marth,
    april,
    may,
    juny,
    july,
    august,
    september,
    october,
    november,
    dedember
};

int enterNumberOfMonth();
void printMonth(Months number);

int main()
{
    setlocale(LC_ALL, "Russian");
    int number{};
    while (true)
    {
        number = enterNumberOfMonth();
        if (number == 0)
        {
            std::cout << "До свидания" << std::endl;
            break;
        }
        printMonth(static_cast<Months>(number));
    }

    system("pause");
    return EXIT_SUCCESS;
}

int enterNumberOfMonth()
{
    int number{};
    while (true)
    {
        std::cout << "Введите номер месяца: " << std::flush;
        std::cin >> number;
        if (number > 12 || number < 0)
        {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }
        break;
    }
    return number;
}

void printMonth(Months month)
{
    switch (month)
    {
    case Months::january:
        std::cout << "Январь" << std::endl;
        break;
    case Months::february:
        std::cout << "Феврфль" << std::endl;
        break;
    case Months::marth:
        std::cout << "Март" << std::endl;
        break;
    case Months::april:
        std::cout << "Апрель" << std::endl;
        break;
    case Months::may:
        std::cout << "Май" << std::endl;
        break;
    case Months::juny:
        std::cout << "Июнь" << std::endl;
        break;
    case Months::july:
        std::cout << "Июль" << std::endl;
        break;
    case Months::august:
        std::cout << "Август" << std::endl;
        break;
    case Months::september:
        std::cout << "Сентябрь" << std::endl;
        break;
    case Months::october:
        std::cout << "Октябрь" << std::endl;
        break;
    case Months::november:
        std::cout << "Ноябрь" << std::endl;
        break;
    case Months::dedember:
        std::cout << "Декабрь" << std::endl;
        break;
    default:
        break;
    }
}
