/*
* Задание 3
Создайте структуру для хранения адреса. Структура должна содержать название города, улицы, номер дома, номер квартиры и индекс.

Создайте функцию для вывода структуры на консоль.

Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.
*/

#include <iostream>
#include <string>
#include <clocale>

struct Address
{
    std::string city{};
    std::string street{};
    int house{};
    int flat{};
    int index{};
};

void printAddress(Address& address);

int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1{ "Москва", "Арбат", 12, 8, 123456 };
    Address address2{ "Ижевск", "Пушкина", 59, 143, 953769 };

    printAddress(address1);
    std::cout << std::endl;
    printAddress(address2);

    system("pause");
    return EXIT_SUCCESS;
}

void printAddress(Address& address)
{
    std::cout << "Город: " << address.city << std::endl << "Улица: " << address.street << std::endl << "Номер дома: " << address.house << std::endl <<
        "Номер квартиры: " << address.flat << std::endl << "Индекс: " << address.index << std::endl;
}