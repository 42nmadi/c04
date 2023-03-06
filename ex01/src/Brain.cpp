/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:06:24 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 10:22:59 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain() {std::cout << "Brain default destructor called" << std::endl;}

Brain& Brain::operator= (const Brain &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = copy.getIdea(i);
		}
	}
	return (*this);
}

std::string	Brain::getIdea(unsigned int i) const
{
	if (i < 100)
		return (this->ideas[i]);
	else
	{
		std::cout << "Invalid index. Returning \"\"" << std::endl;
		return ("");
	}
}

void	Brain::setIdea(std::string idea, unsigned int i)
{
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}