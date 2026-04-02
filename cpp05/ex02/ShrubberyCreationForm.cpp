#include "ShrubberyCreationForm.hpp"

shrubberyCreationForm::shrubberyCreationForm(){
    std::cout << "shrubberyCreationForm Default constructor called !"
        << std::endl;
}
shrubberyCreationForm::shrubberyCreationForm(const shrubberyCreationForm &other) : _target(_target){
    std::cout << " sherubberyCreationForm Copy Constructor called !" << std::endl;
}
shrubberyCreationForm::shrubberyCreationForm(const std::string target){
    this->_target = target;
}