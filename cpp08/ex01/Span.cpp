#include "Span.hpp"

Span::Span() : _size(0){}
Span::Span(unsigned int N) : _size(N){}
Span::Span(const Span& other){
    *this = other;
}
Span& Span::operator=(const Span& other){
    if (this != &other){
        _size = other._size;
        _numbers = other._numbers;
    }
    return (*this);
}
Span::~Span(){}

void Span::addNumber(int number){
    if (_numbers.size() >= _size)
        throw std::exception();
    _numbers.push_back(number);
}

int Span::longestSpan(){
    if (_numbers.size() < 2)
        throw std::exception();
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return (max - min);
}

int Span::shortestSpan(){
    if (_numbers.size() < 2)
        throw std::exception();
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    int minSpan = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++){
        int diff = tmp[i] - tmp[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}