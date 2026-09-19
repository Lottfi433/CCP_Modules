#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}

void PmergeMe::addNumber(int number){
    _vector.push_back(number);
    _deque.push_back(number);
}

void PmergeMe::printVector(){
    std::cout << "vector:";
    for (size_t i = 0; i < _vector.size(); i++)
        std::cout << " " << _vector[i];
    std::cout << std::endl;
}
void PmergeMe::printDeque(){
    std::cout << "deque:";
    for (size_t i = 0; i < _deque.size(); i++)
        std::cout << " " << _deque[i];
    std::cout << std::endl; 
}
void PmergeMe::printPairs()
{
    for (size_t i = 0; i < _pairs.size(); i++)
        std::cout << "(" << _pairs[i].first
                  << ", " << _pairs[i].second << ") ";
    std::cout << std::endl;
}
void PmergeMe::makePairs()
{
    for (size_t i = 0; i + 1 < _vector.size(); i += 2)
    {
        if (_vector[i] < _vector[i + 1])
            _pairs.push_back(std::make_pair(_vector[i], _vector[i + 1]));
        else
            _pairs.push_back(std::make_pair(_vector[i + 1], _vector[i]));
    }
}

void PmergeMe::sortPairs(){
    for (size_t i = 0; i < _pairs.size(); i++){
        std::pair<int, int> current = _pairs[i];
        size_t j = i;
        while (j > 0 && _pairs[j - 1].second > current.second){
            _pairs[j] = _pairs[j - 1];
            j--;
        }
        _pairs[j] = current;
    }
}

std::vector<int> PmergeMe::makeMainChain()
{
    std::vector<int> mainChain;
    for (size_t i = 0; i < _pairs.size(); i++)
        mainChain.push_back(_pairs[i].second);
    return (mainChain);
}
void PmergeMe::sortMainChain(std::vector<int>& mainChain)
{
    for (size_t i = 1; i < mainChain.size(); i++){
        int current = mainChain[i];
        size_t j = i;
        while (j > 0 && mainChain[j - 1] > current){
            mainChain[j] = mainChain[j - 1];
            j--;
        }
        mainChain[j] = current;
    }
}
std::vector<int> PmergeMe::getSmallNumbers(){
    std::vector<int> smallNumbers;
    for (size_t i = 0; i < _pairs.size(); i++)
        smallNumbers.push_back(_pairs[i].first);
    return (smallNumbers);
}
bool PmergeMe::number_validation(const std::string& str){
    if (str.empty())
        return (false);
    for (size_t i = 0; i < str.length(); i++){
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}
int PmergeMe::convert_number(const std::string& str){
    std::stringstream ss(str);
    long number = 0;
    ss >> number;
    if (ss.fail() || number <= 0 ||number > 2147483647)
        throw std::runtime_error("Error");
    return(static_cast<int>(number));
}
std::vector<size_t> PmergeMe::generateJacobsthal(size_t size){
    std::vector<size_t> jacobsthal;

    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    while (jacobsthal.back() < size){
        size_t next = jacobsthal[jacobsthal.size() - 1] + 2 * jacobsthal[jacobsthal.size() - 2];
        jacobsthal.push_back(next);
    }
    return (jacobsthal);
}
std::vector<int> PmergeMe::buildMainChain(){
    std::vector<int> mainChain;
    if (_pairs.empty())
        return (mainChain);
    mainChain.push_back(_pairs[0].first);
    mainChain.push_back(_pairs[0].second);
    for (size_t i = 1; i < _pairs.size(); i++)
        mainChain.push_back(_pairs[i].second);
    return (mainChain);
}
void PmergeMe::binaryInsert(std::vector<int>& chain, int value, size_t end)
{
    size_t left = 0;
    size_t right = end;
    while (left < right){
        size_t middle = left + (right - left) / 2;
        if (chain[middle] < value)
            left = middle + 1;
        else
            right = middle;
    }
    chain.insert(chain.begin() + left, value);
}