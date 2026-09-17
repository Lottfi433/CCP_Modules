#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span{
private:
    unsigned int     _size;
    std::vector<int> _numbers;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};