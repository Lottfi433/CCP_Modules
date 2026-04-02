
#pragma once

#include "AForm.hpp"
#include <iostream>

class shrubberyCreationForm : AForm {
private:
    std::string _target;
public:    
    shrubberyCreationForm();
    shrubberyCreationForm(const shrubberyCreationForm &other);
    shrubberyCreationForm(const std::string target);
    shrubberyCreationForm& operator=(const shrubberyCreationForm &other);
    ~shrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
};