/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:17:31 by yasserlotfi       #+#    #+#             */
/*   Updated: 2026/03/08 13:41:00 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

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