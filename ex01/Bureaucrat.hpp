/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:23:55 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/13 14:33:52 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
    
        const std::string _name;
        size_t _grade;
    
    public:
    
         class GradeTooHighException : public std::exception {
             public:
                const char* what() const throw();
        };
        
            class GradeTooLowException : public std::exception {
             public:
                const char* what() const throw();
        };
        
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        
        void IncrementGrade();
        void DecrementGrade();
        
        const std::string getName();
        size_t getGrade();

        friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif

