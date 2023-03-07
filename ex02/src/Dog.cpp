/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:59:58 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/07 19:17:36 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = NULL;
	*this = dog;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->brain;
	this->brain = NULL;
}

Dog& Dog::operator= (const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain	*Dog::getBrain() const {return(this->brain);}