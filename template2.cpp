#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    // Call the maximum template function with integer values
    int maxInt = maximum(num1, num2);
    std::cout << "Maximum of " << num1 << " and " << num2 << " is: " << maxInt << std::endl;

    double num3 = 3.14;
    double num4 = 2.71;

    // Call the maximum template function with double values
    double maxDouble = maximum(num3, num4);
    std::cout << "Maximum of " << num3 << " and " << num4 << " is: " << maxDouble << std::endl;

    return 0;
}

