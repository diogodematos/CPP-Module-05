/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:52:05 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/14 17:23:14 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "Shru Form Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
    *this = copy;
    std::cout << "Shru Copy Form Created" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shru)
{
    std::cout << "Copy Operator Called" << std::endl;
    (void)shru;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shru Form Destroyed" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    try
    {
        if(getGradeSign() > executor.getGrade())
        {
            std::ofstream outfile((_target + "_shrubbery").c_str());
            if (outfile.is_open()) 
            {
                outfile << "       /\\\n";
                outfile << "      //\\\\\n";
                outfile << "     ///\\\\\\\n";
                outfile << "    ////\\\\\\\\\n";
                outfile << "       |||\n";
                outfile << "       |||\n";
                outfile.close();
                std::cout << "ASCII tree written to " << _target << std::endl;
            }
            else
                std::cerr << "Error creating file" << std::endl;
        }
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}