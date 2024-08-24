/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/24 13:47:26 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try 
    {
        Bureaucrat valid("valid", 1);
        Form* Lol1;
        Form* Lol2;
        Form* Lol3;
        Intern Test;
        std::cout << std::endl;
        Lol1 = Test.makeForm("shrubbery creation", "Bob");
        Lol2 = Test.makeForm("presidential pardon", "Bob");
        Lol3 = Test.makeForm("robotmy request", "Bob");
        std::cout << std::endl;
        valid.executeForm(*Lol1);
        valid.signForm(*Lol1);
        valid.executeForm(*Lol1);
        std::cout << std::endl;
        std::cout << valid;
        std::cout << std::endl;
        delete Lol1;
        delete Lol2;
        delete Lol3;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}