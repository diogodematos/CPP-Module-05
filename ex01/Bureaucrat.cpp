/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:33:43 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/24 11:53:35 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << _name << " with " << _grade << " Grade Created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
    std::cout << "Copy Bureaucrat " << _name << " with " << _grade << " Grade Created" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
    {
        const std::string _name = bureaucrat._name;
        _grade = bureaucrat._grade;
    }
    return *this;
    std::cout << "Copy Operator Bureaucrat " << _name << " with " << _grade << " Grade Created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << _name << " with " << _grade << " Grade Destroyed" << std::endl;
}

void Bureaucrat::IncrementGrade()
{
    try
    {
        if (_grade < 2)
        {
            throw GradeTooHighException();
        }
        _grade--;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

void Bureaucrat::DecrementGrade()
{
    try
    {
        if (_grade > 149)
        {
            throw GradeTooLowException();
        }
        _grade++;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too High!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too Low!");
}

const std::string Bureaucrat::getName()
{
    return _name;
}

size_t Bureaucrat::getGrade()
{
    return _grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat._name << ", bureaucrat grade " << bureaucrat._grade << '.' << std::endl;
    return os;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) 
    {
        std::cout << _name << " couldn’t sign " << form.getName() << " because the grade are more low that necessary to sign!" << std::endl;
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}