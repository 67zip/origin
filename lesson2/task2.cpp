#include <iostream>
#include <string>

// Структура для хранения информации о банковском счете
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Функция для изменения баланса счета
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    std::cout << "Введите номер счета: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Очистить буфер после ввода числа
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счет: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}