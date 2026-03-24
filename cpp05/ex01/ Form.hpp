/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:17:31 by yasserlotfi       #+#    #+#             */
/*   Updated: 2026/03/24 11:27:00 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;
class Form{
private:
    const std::string _name;
    bool    _signed;
    int const _signGrade;
    int const _executeGrade;
public:
    Form();
    Form(const Form& other);
    Form(std::string name, int signGrade, int executeGrade);
    Form&   operator=(const Form& other);
    ~Form();

    const std::string &getName() const;
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
std::ostream& operator<<(std::ostream& out, const Form& f);