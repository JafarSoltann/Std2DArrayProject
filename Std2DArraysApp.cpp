// Std2DArraysApp.cpp
#include "Std2Arrays.h"
#include <iostream>

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
    int numberOfRows, numberOfColumns;

    // Ask user for dimensions of the array
    std::cout << "Enter the number of rows: ";
    std::cin >> numberOfRows;
    std::cout << "Enter the number of columns: ";
    std::cin >> numberOfColumns;

    try {
        // Fill and print the array using NW VER filling pattern
        fillArray(arr, numberOfRows, numberOfColumns);
        printArray(arr, numberOfRows, numberOfColumns);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
