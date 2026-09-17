#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "MutantStack Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "MutantStack Contents:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Normal std::stack:" << std::endl;
    std::stack<int> stack(mstack);
    std::cout << "Top: " << stack.top() << std::endl;
    std::cout << "Size: " << stack.size() << std::endl;
    return (0);
}