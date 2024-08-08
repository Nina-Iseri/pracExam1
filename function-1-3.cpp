#include <iostream>

double* duplicateArray(double* array, int size) {
    if (size < 1) return nullptr;
    double* new_array = new double[size];
    for (int i = 0; i < size; i++) {
        new_array[i] = array[i];
    }
    return new_array;
}