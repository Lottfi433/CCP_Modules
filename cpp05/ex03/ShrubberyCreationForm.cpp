#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
    , _target("default"){
    std::cout << "ShrubberyCreationForm Default constructor called !"
        << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :AForm(other), _target(other._target){
    std::cout << "sherubberyCreationForm Copy Constructor called !" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137)
    , _target(target){
    std::cout << "sherubberyCreationForm initialize constructor called ! "<< std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
    if (this != &other)
        _target = other._target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm Destructor called !" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (!SignedStatus())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    std::ofstream file(_target + "_shrubbery");
    if (!file)
        return;
    file <<
    "   ^   \n"
    "  /|\\  \n"
    " /_|_\\ \n"
    "   |   \n";
    file.close();
}