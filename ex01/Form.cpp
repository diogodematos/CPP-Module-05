/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:29:40 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/13 16:38:18 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeSign, int gradeExecute) : _name(name), _sign(0), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if ((gradeExecute || gradeSign) < 1)
        throw GradeTooHighException();
    if ((gradeExecute || gradeExecute) > 150)
        throw GradeTooHighException();
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too High!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too Low!");
}