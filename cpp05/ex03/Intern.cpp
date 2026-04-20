#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static AForm* createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}
static AForm* createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}
static AForm* createPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}
Intern::Intern(){
    std::cout << "Intern Default constructor called !" << std::endl;
}
Intern::Intern(const Intern& other){
    std::cout << "Intern copy constructor called !" << std::endl;
    (void)other;
}
Intern& Intern::operator=(const Intern& other){
    (void)other;
    return *this;
}

Intern::~Intern(){
    std::cout << "Intern Destructor called !" << std::endl;
}
AForm* Intern::makeForm(std::string name, std::string target){
    std::string forms[3] = {
        "Shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* (*funcs[3])(std::string) = {
        createShrubbery,
        createRobotomy,
        createPresidential
    };
    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return funcs[i](target);
        }
    }
    std::cout << "Error: unknown form" << std::endl;
    return NULL;
}