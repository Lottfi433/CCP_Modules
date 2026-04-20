#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
    , _target("default"){
    std::cout << "PresidentialPardonForm Default constructor called !"
        << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :AForm(other), _target(other._target){
    std::cout << "PresidentialPardonForm Copy Constructor called !" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5)
    , _target(target){
    std::cout << "PresidentialPardonForm initialize constructor called ! "<< std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
    if (this != &other)
        _target = other._target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm  Destructor called !" << std::endl;
}
void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {
        if (!SignedStatus())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    std::cout << _target << " has been pardoned by the President." << std::endl;
}