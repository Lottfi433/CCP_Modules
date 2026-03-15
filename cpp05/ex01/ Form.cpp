/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:17:39 by yasserlotfi       #+#    #+#             */
/*   Updated: 2026/03/11 13:39:15 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Form.hpp"

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
    
}