/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 17:34:31 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
        Bureaucrat valid("valid", 100);
        std::cout << std::endl;
        Form* Formula = new ShrubberyCreationForm("home");
        std::cout << std::endl;
        valid.executeForm(*Formula);
        std::cout << std::endl;
        std::cout << Formula << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << valid;
        delete (Formula);
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

}