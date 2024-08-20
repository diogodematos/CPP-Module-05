/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:38:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/16 18:41:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    private:

        const std::string _target;

    public:

        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &presi);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat &executor) const;

        friend std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &shru);
};

#endif