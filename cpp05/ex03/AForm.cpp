#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _signGrade(150), _executeGrade(150){
    std::cout << "AForm Default constructor called!" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name), _signed(other._signed)
            , _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
        std::cout << "AForm copy constructor called !" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int executeGrade) : _name(name), _signed(false)
            , _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
}
AForm&  AForm::operator=(const AForm& other){
        std::cout << "AForm Copy assignment operator called" << std::endl;
        if (this != &other)
            _signed = other._signed;
        return *this;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Grade is too High!";
}
const char* AForm::GradeTooLowException::what() const throw(){
    return "Grade is too Low!";
}
const char* AForm::FormNotSignedException::what() const throw(){
    return "Form not signed!";
}
const std::string&  AForm::getName() const{
    return _name;
}
int AForm::getSignGrade() const{
    return _signGrade;
}
int AForm::getExecuteGrade() const{
    return _executeGrade;
}
bool AForm::SignedStatus() const{
    return _signed;
}
void AForm::beSigned(Bureaucrat const &b){
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    else
        _signed = true;
}
AForm::~AForm(){
    std::cout << "AForm destructor is called !" << std::endl;
}
std::ostream& operator<<(std::ostream& out, const AForm& f)
{
    out << "AForm " << f.getName()
        << ", signed: " << (f.SignedStatus() ? "yes" : "no")
        << ", sign grade: " << f.getSignGrade()
        << ", execute grade: " << f.getExecuteGrade();
    return out;
}