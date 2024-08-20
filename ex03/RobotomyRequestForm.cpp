/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:54:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/20 12:31:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "Robot Form Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Robot Copy Form Created" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robot)
{
    std::cout << "Copy Operator Called" << std::endl;
    (void)robot;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robot Form Destroyed" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    try
    {
        if(getGradeExecute() > executor.getGrade())
        {
            int n = 2;
            if ((rand() % n) == 1)
                std::cout << _target << "has been robotomized successfully" << std::endl;
            else
                std::cout << "The robotomy failed." << std::endl;

        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        throw Bureaucrat::GradeTooLowException();
    } 
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &Robot)
{
        os << "Robot Form with " << Robot._target << " target!" << std::endl;
        return os;
}