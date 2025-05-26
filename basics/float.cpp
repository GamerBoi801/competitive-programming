#include <iostream>

int main() {
    // printf("%.9f\n", x); ouput a float with 9 decimal places
    double x = 1.0 / 3.0;
    printf("%.20f\n", x); // output a float with 20 decimal places
    double a = 1 / 3.0;
    if (abs(x - a) < 1e-9) {
        std::cout << "x and a are equal" << std::endl;
    } else {
        std::cout << "x and a are not equal" << std::endl;
    }

}