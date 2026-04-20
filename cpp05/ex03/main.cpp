#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat low("Low", 150);
    ShrubberyCreationForm s("home");
    RobotomyRequestForm r("Bender");
    PresidentialPardonForm p("Marvin");

    try {
    AForm *test;

    Intern t;
    test = t.makeForm("shrubbery creation" , "home");
    // Bureaucrat boss("Boss", 1);
    //     s.beSigned(boss);
    //     s.execute(boss);
    //     r.beSigned(boss);
    //     r.execute(boss);
    //     p.beSigned(boss);
    //     p.execute(boss);
        // p.execute(low); // should throw
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}