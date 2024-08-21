/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:41:48 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/21 15:24:00 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.cpp"

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

Intern::~Intern
{
    std::cout << "Intern Destroyed" << std::endl;
}

Void Intern::shrubbery()
{
    return (new Shrubbery::Shrubbery);
}

void Intern::makeform(std::string name, std::string target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"}
    for(int i = 0; j < 5; j++)
    {
        switch(i)
        {
            case 0:
                (this->shrubbery());
                break;
            case 1:
                (this->robotomy());
                break;
            case 2:
                (this->presidential());
                break;
            default:
                std::cerr << "Form isn't correct" << std::endl;
                break; 
        }
    }
}