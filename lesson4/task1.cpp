#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Address {
    std::string city;
    std::string street;
    std::string houseNumber;
    std::string apartmentNumber;
};

int main() {
    std::ifstream inFile("in.txt");
    std::ofstream outFile("out.txt");

    int N;
    inFile >> N;

    std::vector<Address> addresses(N);

    for (int i = 0; i < N; i++) {
        inFile.ignore(); 
        std::getline(inFile, addresses[i].city);
        std::getline(inFile, addresses[i].street);
        std::getline(inFile, addresses[i].houseNumber);
        std::getline(inFile, addresses[i].apartmentNumber);
    }

    outFile << N << std::endl;

    for (int i = N - 1; i >= 0; i--) {
        outFile << addresses[i].city << ", " << addresses[i].street << ", "
                << addresses[i].houseNumber << ", " << addresses[i].apartmentNumber << std::endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}