/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:44:48 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/20 15:01:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "Presi Form Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Presi Copy Form Created" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &Presi)
{
    std::cout << "Copy Operator Called" << std::endl;
    (void)Presi;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presi Form Destroyed" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    try
    {
        if(getGradeExecute() > executor.getGrade())
        {
            std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl; 
        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        throw Bureaucrat::GradeTooLowException();
    } 
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &Presi)
{
        os << "Presi Form with " << Presi._target << " target!" << std::endl;
        return os;
}