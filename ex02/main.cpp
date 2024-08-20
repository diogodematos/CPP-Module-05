/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/20 15:52:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main()
// {
//     try 
//     {
//         Bureaucrat valid("valid", 10);
//         std::cout << std::endl;
//         const Form* Formula = new ShrubberyCreationForm("home");
//         const Form* Robo = new RobotomyRequestForm("local");
//         std::cout << *Formula << std::endl;
//         std::cout << std::endl;
//         valid.executeForm(*Formula);
//         std::cout << *Formula << std::endl;
//         valid.executeForm(*Robo);
//         valid.executeForm(*Robo);
//         std::cout << *Robo << std::endl;
//         valid.executeForm(*Robo);
//         std::cout << std::endl;
//         std::cout << std::endl;
//         std::cout << valid;
//         std::cout << std::endl;
//         delete (Formula);
//     } 
//     catch (const std::exception& e) 
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
// }

// int main()
// {
//     try 
//     {
//         Bureaucrat valid("valid", 145);
//         std::cout << std::endl;
//         //const Form* Robo = new RobotomyRequestForm("local");
//         RobotomyRequestForm Robo("local");
//         std::cout << Robo << std::endl;
//         std::cout << std::endl;
//         valid.executeForm(Robo);
//         valid.signForm(Robo);
//         std::cout << Robo << std::endl;
//         valid.executeForm(Robo);
//         //valid.executeForm(Robo);
//         std::cout << Robo << std::endl;
//         //valid.executeForm(Robo);
//         std::cout << std::endl;
//         std::cout << std::endl;
//         std::cout << valid;
//         std::cout << std::endl;
//         //delete (Robo);
//     } 
//     catch (const std::exception& e) 
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
// }

int main()
{
    try 
    {
        Bureaucrat valid("valid", 1);
        std::cout << std::endl;
        //const Form* Robo = new RobotomyRequestForm("local");
        PresidentialPardonForm Robo("local");
        std::cout << Robo << std::endl;
        std::cout << std::endl;
        valid.executeForm(Robo);
        valid.signForm(Robo);
        std::cout << Robo << std::endl;
        valid.executeForm(Robo);
        //valid.executeForm(Robo);
        std::cout << Robo << std::endl;
        //valid.executeForm(Robo);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << valid;
        std::cout << std::endl;
        //delete (Robo);
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}