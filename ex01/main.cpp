/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 12:40:14 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat valid("valid", 100);  // Deve lançar GradeTooLowException
        Form Formula("Formula", 90, 110);
        std::cout << Formula;
        valid.signForm(Formula);
        std::cout << Formula;
        valid.DecrementGrade();
        std::cout << valid.getName() << ", bureaucrat grade " << valid.getGrade() << std::endl;
        std::cout << valid;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

}