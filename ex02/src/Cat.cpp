/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:59:53 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/07 19:16:37 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = NULL;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->brain;
	this->brain = NULL;
}

Cat& Cat::operator= (const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain	*Cat::getBrain() const {return(this->brain);}