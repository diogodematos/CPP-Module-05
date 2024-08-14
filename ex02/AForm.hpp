/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:53:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 17:17:13 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

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

        std::string getName() const;
        bool getSign();
        size_t getGradeSign() const;
        size_t getGradeExecute()const;

        friend std::ostream &operator<<(std::ostream &os, const Form &form);

        void beSigned(Bureaucrat &bureaucrat);

        virtual void execute(const Bureaucrat &executor) const = 0;
};

#endif