/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:29:40 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 17:17:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int gradeSign, int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if (gradeExecute < 1 || gradeSign < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeExecute > 150 || gradeSign > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Form " << _name << " Created" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{
    std::cout << "Copy Form Created" << std::endl;
}

Form &Form::operator=(const Form &form)
{
    std::cout << "Form Copy Operator Called" << std::endl;
    if (this != &form)
    {
        _sign = form._sign;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Form " << _name << " Destroyed" << std::endl;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getSign() 
{
    return _sign;
}

size_t Form::getGradeSign() const
{
    return _gradeSign;
}

size_t Form::getGradeExecute() const
{
    return _gradeExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(getGradeSign() > bureaucrat.getGrade())
        _sign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "Form " << form._name << ". Signed: " << form._sign << ". Grade to Sign: " << form._gradeSign << ". Grade to Execute: " << form._gradeExecute << '.' << std::endl;
    return os;
}