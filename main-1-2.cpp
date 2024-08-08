#include <iostream>

extern double modifyArray(double*, int, double);

int main(void) {
    double arr[3] = {0, 1.2, 1.1};
    modifyArray(arr, 3, -1.5);
    for (int i = 0; i < 3; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    return 0;
}