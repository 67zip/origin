#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть входной файл." << std::endl;
        return 1;
    }

    int n;
    inputFile >> n;

    std::vector<int> arrayN(n);
    for (int i = 0; i < n; i++) {
        inputFile >> arrayN[i];
    }

    int m;
    inputFile >> m;

    std::vector<int> arrayM(m);
    for (int i = 0; i < m; i++) {
        inputFile >> arrayM[i];
    }

    inputFile.close();

    int temp = arrayM[m - 1];
    for (int i = m - 1; i > 0; i--) {
        arrayM[i] = arrayM[i - 1];
    }
    arrayM[0] = temp;

    temp = arrayN[0];
    for (int i = 0; i < n - 1; i++) {
        arrayN[i] = arrayN[i + 1];
    }
    arrayN[n - 1] = temp;

    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть выходной файл." << std::endl;
        return 1;
    }

    outputFile << m << std::endl;
    for (int i = 0; i < m; i++) {
        outputFile << arrayM[i] << " ";
    }
    outputFile << std::endl;

    outputFile << n << std::endl;
    for (int i = 0; i < n; i++) {
        outputFile << arrayN[i] << " ";
    }
    outputFile << std::endl;

    outputFile.close();

    return 0;
}