#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initialCount = 1) : count(initialCount) {}

    void increment() {
        count++;
    }

    void decrement() {
        count--;
    }

    int getValue() {
        return count;
    }
};

int main() {
    char command;
    int initialValue;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string response;
    std::cin >> response;

    Counter counter; // Перемещаем объявление counter за пределы блока if

    if (response == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue); // Присваиваем новый объект Counter
    }

    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        } else if (command == '-') {
            counter.decrement();
        } else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        } else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        } else {
            std::cout << "Неверная команда. Попробуйте ещё раз." << std::endl;
        }
    }

    return 0;
}
