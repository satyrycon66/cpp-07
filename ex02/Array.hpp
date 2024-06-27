#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
private:
    T *data;
    unsigned int arraySize;

public:
    Array() : data(nullptr), arraySize(0) {}
    explicit Array(unsigned int n) : data(new T[n]), arraySize(n) {}
    Array(const Array& other) : data(new T[other.arraySize]), arraySize(other.arraySize) {
        for (unsigned int i = 0; i < arraySize; ++i) {
            data[i] = other.data[i];
        }
    }
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            arraySize = other.arraySize;
            data = new T[arraySize];
            for (unsigned int i = 0; i < arraySize; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
    ~Array() {
        delete[] data;
    }

    T& operator[](unsigned int index) {
        if (index >= arraySize) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    unsigned int size() const {
        return arraySize;
    }
};

#endif // ARRAY_HPP
