#include <iostream>

extern double arrayMin(double*, int);
int main(void) {
    double arr[3] = {0, 1.2, 1.1};
    std::cout << "min = " << arrayMin(arr, 3) << std::endl;
    return 0;
}