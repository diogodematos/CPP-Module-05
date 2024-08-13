/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:53:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/13 16:37:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form 
{
    private:

        const std::string _name;
        bool _sign;
        const size_t _gradeSign;
        const size_t _gradeExecute;

    public:

        Form(const std::string name, int gradeSign, int gradeExecute);
        Form(const Form &copy);
        Form &operator=(const Form &form);
        ~Form();

        // class GradeTooLowException : public std::exception
        // {
        //     const char* what() const throw();
        // };

        // class GradeTooHighException : std::exception
        // {
        //     const char* what() const throw();
        // };

        std::string getName;
        bool getSign;
        int getGradeSign;
        int getGradeExecute;

        friend std::ostream &operator<<(std::ostream &os, const Form &form);

        bool beSigned();  
};

#endif