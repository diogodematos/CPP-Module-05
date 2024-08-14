/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 15:23:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    try 
    {
        Bureaucrat valid("valid", 100);
        Form Formula("Formula", 90, 110);
        Form test("teste", 150, 145);
        std::cout << Formula;
        valid.signForm(Formula);
        std::cout << Formula << std::endl;
        valid.signForm(test);
        std::cout << test;
        valid.DecrementGrade();
        std::cout << valid.getName() << ", bureaucrat grade " << valid.getGrade() << std::endl;
        std::cout << valid;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

}