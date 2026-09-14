#include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN() {}

void RPN::calculate(const std::string& expression)
{
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token){
        if (token.length() == 1 && std::isdigit(token[0]))
            _stack.push(token[0] - '0');
        else if (token.length() == 1
            && (token[0] == '+' || token[0] == '-'
            || token[0] == '*' || token[0] == '/')){
                if (_stack.size() < 2){
                    std::cerr << "Error" << std::endl;
                    return;
                }
                int b = _stack.top();
                _stack.pop();
                int a = _stack.top();
                _stack.pop();
                int r = 0;
                if (token[0] == '+')
                   r = a + b;
                else if (token[0] == '-')
                    r = a - b;
                else if (token[0] == '*')
                    r = a * b;
                else if (token[0] == '/'){
                    if (b == 0){
                        std::cerr << "Error:number can't be divided by 0" << std::endl;
                        return;
                    }
                    r = a / b;
                }
                _stack.push(r);
        }
    }
    if (_stack.size() != 1){
        std::cerr << "Error" << std::endl;
        return;
    }
    std::cout << _stack.top() << std::endl;
}