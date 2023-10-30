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

    std::cout << "�� ��� 㪠���� ��砫쭮� ���祭�� ����稪�? ������ �� ��� ���: ";
    std::string response;
    std::cin >> response;

    Counter counter; // ��६�頥� ������� counter �� �।��� ����� if

    if (response == "��") {
        std::cout << "������ ��砫쭮� ���祭�� ����稪�: ";
        std::cin >> initialValue;
        counter = Counter(initialValue); // ��ᢠ����� ���� ��ꥪ� Counter
    }

    while (true) {
        std::cout << "������ ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        } else if (command == '-') {
            counter.decrement();
        } else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        } else if (command == 'x') {
            std::cout << "�� ᢨ�����!" << std::endl;
            break;
        } else {
            std::cout << "����ୠ� �������. ���஡�� ��� ࠧ." << std::endl;
        }
    }

    return 0;
}
