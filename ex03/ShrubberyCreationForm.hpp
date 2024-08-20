/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:47:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/16 11:54:20 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    private:

        const std::string _target;

    public:

        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shru);
        ~ShrubberyCreationForm();

        void execute(const Bureaucrat &executor) const;

        friend std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &shru);
};

#endif