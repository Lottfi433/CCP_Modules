#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(){
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::vector<int>::iterator it;

    it = easyfind(v, 20);
    if (it != v.end())
        std::cout << "found: " << *it << std::endl;
    else
        std::cout << "not found: " << *it << std::endl;
    it = easyfind(v, 42);

    if (it != v.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;
}