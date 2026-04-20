#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
    , _target("default"){
    std::cout << "RobotomyRequestForm Default constructor called !"
        << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :AForm(other), _target(other._target){
    std::cout << "RobotomyRequestForm Copy Constructor called !" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45)
    , _target(target){
    std::cout << "RobotomyRequestForm initialize constructor called ! "<< std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
    if (this != &other)
        _target = other._target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm  Destructor called !" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!SignedStatus())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    std::cout << "BZZZZZZZZZ...." << std::endl;
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed for " << _target << " :(" << std::endl;
}