#pragma once

#include <stack>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

class RPN{
private:
    std::stack<int> _stack;
public:
    RPN();
    ~RPN();

    void calculate(const std::string& expression);
};