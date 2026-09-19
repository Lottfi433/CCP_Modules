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
    void sortPairs();
    std::vector<int> makeMainChain();
    std::vector<int> getSmallNumbers();
    std::vector<size_t> generateJacobsthal(size_t size);
    void sortMainChain(std::vector<int>& mainChain);
    void binaryInsert(std::vector<int>& chain, int value, size_t end);
    bool number_validation(const std::string& str);
    int  convert_number(const std::string& str);
    std::vector<int> buildMainChain();
};