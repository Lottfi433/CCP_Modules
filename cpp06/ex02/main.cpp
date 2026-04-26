#include "Base.hpp"

int main()
{
    srand(time(NULL));

    Base* obj = generate();

    identify(obj);
    identify(*obj);

    delete obj;
}