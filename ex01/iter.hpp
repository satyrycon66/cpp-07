// iter.h

#ifndef ITER_H
#define ITER_H

#include <cstddef> // Pour size_t

template<typename T>
void iter(T *array, size_t size, void (*func)(T &element)) {
    for (size_t i = 0; i < size; ++i) {
        func(array[i]);
    }
}

#endif // ITER_H
