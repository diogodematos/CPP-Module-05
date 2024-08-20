/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:35:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/20 16:39:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>

class Intern
{
    public:

        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &intern);
        ~Intern();

        void makeForm(std::string name, std::string target);
};

#endif