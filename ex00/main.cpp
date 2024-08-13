/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:38:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/13 14:41:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat invalid("Invalid", 0);  // Deve lançar GradeTooLowException
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat valid("valid", 100);  // Deve lançar GradeTooLowException
        valid.DecrementGrade();
        std::cout << valid.getName() << ", bureaucrat grade " << valid.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    try {
        Bureaucrat max("Invalid1", 149);  // Deve lançar GradeTooLowException
        max.DecrementGrade();
        std::cout << max << std::endl;
        max.DecrementGrade();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}