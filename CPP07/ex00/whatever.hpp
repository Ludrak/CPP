
#pragma once

template<typename T>
void swap    (T &a, T &b)
{
    T   buff;

    buff = a;
    a = b;
    b = buff;
}

template<typename T>
T   min    (const T &a, const T &b)
{
    return (a < b ? a : b);
}

template<typename T>
T   max    (const T &a, const T &b)
{
    return (a > b ? a : b);
}