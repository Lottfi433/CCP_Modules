#include "PmergeMe.hpp"

int main(int ac, char **argv){
    if (ac < 2){
        std::cerr << "Error at least one arg needed" << std::endl;
        return (1);
    }
    PmergeMe pmerge;
    for (int i = 1; i < ac; i++){
        if (!pmerge.number_validation(argv[i])){
            std::cerr << "Error" << std::endl;
            return (1);
        }
        try {
            int nbr = pmerge.convert_number(argv[i]);
            pmerge.addNumber(nbr);
        }
        catch ( std::exception &e){
            std::cerr << e.what() << std::endl;
            return (1);
        }
    }
    pmerge.makePairs();
    pmerge.printVector();
    pmerge.printDeque();
    pmerge.printPairs();
    std::vector<int> mainChain = pmerge.makeMainChain();

pmerge.sortMainChain(mainChain);

for (size_t i = 0; i < mainChain.size(); i++)
    std::cout << mainChain[i] << " ";

std::cout << std::endl;
std::vector<size_t> jacob = pmerge.generateJacobsthal(10);

for (size_t i = 0; i < jacob.size(); i++)
    std::cout << jacob[i] << " ";

std::cout << std::endl;
    return (0);
}