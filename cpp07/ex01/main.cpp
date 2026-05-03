#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(T  &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void addOne(T  &x)
{
    x++;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;

    iter(arr, len, print<int>);
    iter(arr, len, addOne<int>);
    iter(arr, len, print<int>);

    std::cout << "---- strings ----" << std::endl;

    std::string str[] = {"hello", "world", "cpp", "07"};
    int len2 = 4;

    iter(str, len2, print<std::string>);

    return 0;
}