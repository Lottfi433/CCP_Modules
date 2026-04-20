#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _signGrade(150), _executeGrade(150){
    std::cout << "Form Default constructor called!" << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _signed(other._signed)
            , _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
        std::cout << "Form copy constructor called !" << std::endl;
}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _signed(false)
            , _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
}
Form&  Form::operator=(const Form& other){
        std::cout << "Form Copy assignment operator called" << std::endl;
        if (this != &other)
            _signed = other._signed;
        return *this;
}
Form::~Form(){
    std::cout << "Form destructor is called !" << std::endl;
}
const char* Form::GradeTooHighException::what() const throw(){
    return "Grade is too High!";
}
const char* Form::GradeTooLowException::what() const throw(){
    return "Grade is too Low!";
}
const std::string&  Form::getName() const{
    return _name;
}
int Form::getSignGrade() const{
    return _signGrade;
}
int Form::getExecuteGrade() const{
    return _executeGrade;
}
bool Form::SignedStatus() const{
    return _signed;
}
void Form::beSigned(Bureaucrat const &b){
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    else
        _signed = true;
}
std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << "Form " << f.getName()
        << ", signed: " << (f.SignedStatus() ? "yes" : "no")
        << ", sign grade: " << f.getSignGrade()
        << ", execute grade: " << f.getExecuteGrade();
    return out;
}