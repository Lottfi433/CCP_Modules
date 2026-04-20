#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b1("Alice", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // try
    // {
    //     Bureaucrat b2("Bob", 0);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat b3("Charlie", 151);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat b4("Max", 1);
    //     std::cout << b4 << std::endl;
    //     b4.incrementGrade();
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat b5("Min", 150);
    //     std::cout << b5 << std::endl;
    //     b5.decrementGrade();
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     Bureaucrat original("Original", 50);
    //     std::cout << "Original: " << original << std::endl;

    //     Bureaucrat copy = original;
    //     std::cout << "Copy: " << copy << std::endl;
    //     Bureaucrat assigned("Temp", 10);
    //     assigned = original;
    //     std::cout << "Assigned: " << assigned << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    return 0;
}