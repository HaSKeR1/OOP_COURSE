#include <iostream>

int SearchMaxAmountInterval(int& row, int column, int** numbers) {
    int minRow = 0, count = 0;

    for (int j = 1; j < row; j++) {
        if (numbers[j][1] < numbers[minRow][1]) {
            minRow = j;
        }
    }

    int minFirst = numbers[minRow][0];
    int minSecond = numbers[minRow][1];

    for (int i = 0; i < row; i++) {
        if (numbers[i][0] <= minFirst && numbers[i][1] >= minSecond) {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "rus");
    int row, column = 2;
    std::cin >> row;

    int** numbers = new int* [row];
    for (int i = 0; i < row; i++) {
        numbers[i] = new int[column];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cin >> numbers[i][j];
        }
    }

    std::cout << SearchMaxAmountInterval(row, column, numbers) << std::endl;

    for (int i = 0; i < row; i++) {
        delete[] numbers[i];
    }
    delete[] numbers;

    return 0;
}
