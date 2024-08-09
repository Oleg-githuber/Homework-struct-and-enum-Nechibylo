/*
Задание 2
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число).

Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.

Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.
*/

#include <iostream>
#include <string>
#include <Windows.h>

struct Account
{
    unsigned long long number{};
    std::string name{};
    double money{};
};

Account enterInfo();
void changeValue(Account& account);
void printAccount(Account& account);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Account person1 = enterInfo();
    //printAccount(person1);    // Можно добавить эту строку для наглядности последующего изменения
    changeValue(person1);
    printAccount(person1);

    system("pause");
    return EXIT_SUCCESS;
}

Account enterInfo()
{
    std::cout << "Введите номер счёта: " << std::flush;
    unsigned long long number{};
    std::cin >> number;

    std::cout << "Введите имя владельца: " << std::flush;
    std::string name;
    std::cin >> name;

    std::cout << "Введите баланс: " << std::flush;
    double money{};
    std::cin >> money;

    return { number, name, money };
}

void changeValue(Account& account)
{
    std::cout << "Введите новый баланс: " << std::flush;
    double money{};
    std::cin >> money;
    account.money = money;
}

void printAccount(Account& account)
{
    std::cout << "Ваш счёт: " << account.name << ", " << account.number << ", " << account.money << std::endl;
}