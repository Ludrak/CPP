
#pragma once

#include <stddef.h>

template<typename T>
void
iter(T *array, size_t size, void (*f)(const T &))
{
    for (size_t i = 0; i < size; i++)
        f(*array++);
}