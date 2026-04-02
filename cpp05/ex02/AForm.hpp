#pragma once

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;
class AForm{
private:
    const std::string _name;
    bool    _signed;
    int const _signGrade;
    int const _executeGrade;
public:
    AForm();
    AForm(const AForm& other);
    AForm(std::string name, int signGrade, int executeGrade);
    AForm&   operator=(const AForm& other);
    virtual ~AForm();

    const std::string &getName() const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool SignedStatus() const;
    void beSigned(Bureaucrat const &b);
    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char* what() const throw();
    };
};