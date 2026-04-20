#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade (150){
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
        std::cout << "Bureaucrat Copy constructor called" << std::endl;
}
Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& other){
        std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
        if (this != &other)
            grade = other.grade;
        return *this;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    if (grade < 1){
        throw GradeTooHighException();
    }
    if (grade > 150){
        throw GradeTooLowException();
    }
    this->grade = grade;
    std::cout << "Bureaucrat intializer constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}
int  Bureaucrat::getGrade() const{
    return grade;
}

const std::string& Bureaucrat::getName() const{
    return name;
}

void Bureaucrat::incrementGrade(){
    if (grade <= 1)
        throw GradeTooHighException();
    else
        grade--;
}
void Bureaucrat::decrementGrade(){
    if (grade >= 150)
        throw GradeTooLowException();
    else
        grade++;
}
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too High!";
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too Low!";
}
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b){
    out<< b.getName() << ", Bureaucrat grade " << b.getGrade() << ".";
    return out;
}
void Bureaucrat::signForm(AForm &form){
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << std::endl;
}