#include <iostream>

extern double* duplicateArray(double*, int);

int main(void) {
    double arr[3] = {0, 1.2, 1.1};
    double* new_arr = duplicateArray(arr, 3);
    for (int i = 0; i < 3; i++) {
        std::cout << new_arr[i] << std::endl;
    }
    return 0;
}