/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:35:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/22 16:09:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:

        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &intern);
        ~Intern();

        Form* shrubbery(std::string target);
        Form* robotomy(std::string target);
        Form* presidential(std::string target);
        
        Form* makeForm(std::string name, std::string target);

        class WrongForm : public std::exception
        {
            public:

                const char* what() const throw();
        };
};

#endif