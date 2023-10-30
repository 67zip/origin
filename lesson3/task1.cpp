#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cout << "Деление на ноль" << std::endl;
            return 0.0;
        }
    }

    double divide_2_1() {
        if (num1 != 0) {
            return num2 / num1;
        } else {
            std::cout << "Деление на ноль" << std::endl;
            return 0.0;
        }
    }

    bool set_num1(double num) {
        if (num != 0) {
            num1 = num;
            return true;
        } else {
            std::cout << "Число не должно быть равно нулю" << std::endl;
            return false;
        }
    }

    bool set_num2(double num) {
        if (num != 0) {
            num2 = num;
            return true;
        } else {
            std::cout << "Число не должно быть равно нулю" << std::endl;
            return false;
        }
    }
};

int main() {
    Calculator calculator;
    double num1, num2;

    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> num1;

        if (num1 == 0) {
            std::cout << "Выход из программы. До свидания!" << std::endl;
            break;
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;

        if (num2 == 0) {
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }

        calculator.set_num1(num1);
        calculator.set_num2(num2);

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }

    return 0;
}
