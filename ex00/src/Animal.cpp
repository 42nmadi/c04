/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:39:50 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:53:57 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Abstract Animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal() {std::cout << "Animal default destructor called" << std::endl;}

Animal& Animal::operator= (const Animal &copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

std::string const&	Animal::getType(void) const {return (this->type);}

void	Animal::makeSound() const
{
	std::cout << "*abstract animal sounds*" << std::endl;
}
