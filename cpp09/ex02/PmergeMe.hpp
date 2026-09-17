#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <stdexcept>
#include <utility>

class PmergeMe{
private:
    std::vector<int> _vector;
    std::deque<int> _deque;
    std::vector<std::pair<int, int> > _pairs;

public:
    PmergeMe();
    ~PmergeMe();

    void addNumber(int number);
    void printVector();
    void printDeque();
    void printPairs();
    void makePairs();
    std::vector<int> makeMainChain();
    std::vector<int> getSmallNumbers();
    void sortMainChain(std::vector<int>& mainChain);
    bool number_validation(const std::string& str);
    int  convert_number(const std::string& str);
};