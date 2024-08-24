/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:41:48 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/24 13:46:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor Created" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
    std::cout << "Intern Copy Constructor Created" << std::endl;
}

Intern &Intern::operator=(const Intern &intern)
{
    (void)intern;
    std::cout << "Intern Copy Operator Called" << std::endl;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destroyed" << std::endl;
}

Form* Intern::shrubbery(std::string target)
{
    std::cout << "Intern creates Shrubbery Form" << std::endl;
    return new ShrubberyCreationForm(target);
}

Form* Intern::robotomy(std::string target)
{
    std::cout << "Intern creates Robotomy Form" << std::endl;
    return new RobotomyRequestForm(target);
}

Form* Intern::presidential(std::string target)
{
    std::cout << "Intern creates Presidential Form" << std::endl;
    return new PresidentialPardonForm(target);
}

const char* Intern::WrongForm::what() const throw()
{
    return ("This Form Don't Exists");
}

// Form* Intern::makeForm(std::string name, std::string target)
// {
//     std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
//     try
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             if (i == 3 || form[i] == name)
//             {
//                 switch(i)
//                 {
//                     case 0:
//                         return (this->shrubbery(target));
//                         break;
//                     case 1:
//                         return (this->robotomy(target));
//                         break;
//                     case 2:
//                         return (this->presidential(target));
//                         break;
//                     default:
//                         throw WrongForm();
//                         break; 
//                 }
//             }
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "Exception: " << e.what() << '\n';
//     }
//     return 0;
// }

Form* Intern::makeForm(std::string name, std::string target)
{
    Form* (Intern::*makeForm[3])(std::string target) = {&Intern::shrubbery, &Intern::robotomy, &Intern::presidential};
    std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (form[i] == name)
                return (this->*makeForm[i])(target);
        }
        throw WrongForm();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    return 0;
}