#include <iostream>
#include <string>

struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    std::string index;
};

// Функция для вывода информации об адресе
void printAddress(const Address& addr) {
    std::cout << "Город: " << addr.city << "\n";
    std::cout << "Улица: " << addr.street << "\n";
    std::cout << "Номер дома: " << addr.houseNumber << "\n";
    std::cout << "Номер квартиры: " << addr.apartmentNumber << "\n";
    std::cout << "Индекс: " << addr.index << "\n";
}

int main() {
    // Создание экземпляров структуры Address
    Address addr1 = { "Москва", "Арбат", 12, 8, "123456" };
    Address addr2 = { "Ижевск", "Пушкина", 59, 143, "953769" };

    // Вывод информации об адресах
    printAddress(addr1);
    std::cout << "\n";
    printAddress(addr2);

    return 0;
}