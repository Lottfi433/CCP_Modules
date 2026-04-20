
#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>
class ShrubberyCreationForm : public AForm {
private:
    std::string _target;
public:    
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
};