#include <iostream>
using namespace std;

enum Months {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main() {
    int monthNumber;

    do {
        cout << "Введите номер месяца (1-12, 0 для выхода): ";
        cin >> monthNumber;

        if (monthNumber >= 1 && monthNumber <= 12) {
            switch (static_cast<Months>(monthNumber)) {
                case Январь: cout << "Январь" << endl; break;
                case Февраль: cout << "Февраль" << endl; break;
                case Март: cout << "Март" << endl; break;
                case Апрель: cout << "Апрель" << endl; break;
                case Май: cout << "Май" << endl; break;
                case Июнь: cout << "Июнь" << endl; break;
                case Июль: cout << "Июль" << endl; break;
                case Август: cout << "Август" << endl; break;
                case Сентябрь: cout << "Сентябрь" << endl; break;
                case Октябрь: cout << "Октябрь" << endl; break;
                case Ноябрь: cout << "Ноябрь" << endl; break;
                case Декабрь: cout << "Декабрь" << endl; break;
            }
        } else if (monthNumber != 0) {
            cout << "Неправильный номер!" << endl;
        }

    } while (monthNumber != 0);

    cout << "До свидания" << endl;

    return 0;
}