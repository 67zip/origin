#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

struct Address {
    std::string city;
    std::string street;
    std::string house;
    std::string apartment;
};

bool compareAddresses(const Address& a, const Address& b) {
    return a.city < b.city;
}

int main() {
    std::ifstream inputFile("in_2.txt");
    std::ofstream outputFile("out_2.txt");
    
    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Ошибка открытия файлов." << std::endl;
        return 1;
    }

    int numAddresses;
    inputFile >> numAddresses;

    inputFile.ignore(); // Пропустить символ новой строки

    std::vector<Address> addresses;

    for (int i = 0; i < numAddresses; i++) {
        Address address;
        std::getline(inputFile, address.city);
        std::getline(inputFile, address.street);
        std::getline(inputFile, address.house);
        std::getline(inputFile, address.apartment);
        addresses.push_back(address);
    }

    inputFile.close();

    std::sort(addresses.begin(), addresses.end(), compareAddresses);

    outputFile << numAddresses << std::endl;

    for (const Address& address : addresses) {
        outputFile << address.city << ", " << address.street << ", " << address.house << ", " << address.apartment << std::endl;
    }

    outputFile.close();

    return 0;
}