#include <iostream>
#include "Array.hpp"

int main() {
    // Test Array with int
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i;
    }

    std::cout << "Int Array elements:" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test Array with double
   Array<double> doubleArray(intArray.size());
for (unsigned int i = 0; i < intArray.size(); ++i) {
    doubleArray[i] = static_cast<double>(intArray[i]);
}
    std::cout << std::endl;

    // Test accessing out of bound index
    try {
        std::cout << "Accessing element at index 10: " << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
