#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // Открываем входной файл для чтения
    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть входной файл." << std::endl;
        return 1;
    }

    // Считываем размер первого массива
    int n;
    inputFile >> n;

    // Считываем первый массив
    std::vector<int> arrayN(n);
    for (int i = 0; i < n; i++) {
        inputFile >> arrayN[i];
    }

    // Считываем размер второго массива
    int m;
    inputFile >> m;

    // Считываем второй массив
    std::vector<int> arrayM(m);
    for (int i = 0; i < m; i++) {
        inputFile >> arrayM[i];
    }

    // Закрываем входной файл
    inputFile.close();

    // Выполняем необходимые преобразования
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

    // Открываем выходной файл для записи
    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть выходной файл." << std::endl;
        return 1;
    }

    // Записываем размер второго массива и его элементы
    outputFile << m << std::endl;
    for (int i = 0; i < m; i++) {
        outputFile << arrayM[i] << " ";
    }
    outputFile << std::endl;

    // Записываем размер первого массива и его элементы
    outputFile << n << std::endl;
    for (int i = 0; i < n; i++) {
        outputFile << arrayN[i] << " ";
    }
    outputFile << std::endl;

    // Закрываем выходной файл
    outputFile.close();

    return 0;
}