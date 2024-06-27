// main.cpp
#include <iostream>
#include "iter.hpp"

// Une fonction de test
template<typename T>
void printElement(T &element) {
    std::cout << element << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Test avec un tableau d'entiers
    iter(intArray, 5, printElement<int>);

    // Test avec un tableau de caractères
    iter(charArray, 5, printElement<char>);

    return 0;
}
