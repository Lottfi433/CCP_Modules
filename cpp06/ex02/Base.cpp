#include "Base.hpp"


Base::~Base(){}

Base* generate(){
    int r = rand() % 3;
    if (r == 0){
        std::cout << "Generating A..."<< std::endl;
        return new A;
    }
    else if (r == 1){
        std::cout << "Generating B..."<< std::endl;
        return new B;
    }
    else{
        std::cout << "Generating C..."<< std::endl;
        return new C;
    }
}

void    identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void    identify(Base& p){
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(...){}
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(...){}
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(...){}
}