
#pragma once

#include <exception>
#include <algorithm>

template<typename T>
size_t  easyfind(const T &arr, int n)
{
    typename T::const_iterator it = std::find(arr.begin(), arr.end(), n);
    return (it - arr.begin());
}

