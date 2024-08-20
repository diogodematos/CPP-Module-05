/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:51:08 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/16 14:04:26 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <fstream>
#include <cstdlib> 

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    private:

        const std::string _target;

    public:

        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &robot);
        ~RobotomyRequestForm();

        void execute(const Bureaucrat &executor) const;

        friend std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &robot);
};

#endif