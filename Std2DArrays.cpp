// Std2DArrays.cpp
#include "Std2Arrays.h"
#include <iostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int startValue = 1;

    // Fill array vertically alternating (NW VER)
    for (int col = 0; col < columns; col++) {
        if (col % 2 == 0) {  // Even columns (index starts from 0), top to bottom
            for (int row = 0; row < rows; row++) {
                arr[row][col] = startValue++;
            }
        } else {  // Odd columns, bottom to top
            for (int row = rows - 1; row >= 0; row--) {
                arr[row][col] = startValue++;
            }
        }
    }
}

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
