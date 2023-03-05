/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:39:50 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 17:45:36 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Default destructor called" << std::endl;
}

Animal& Animal::operator= (const Animal &animal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

// std::string const&	getType() const;

// virtual void		makeSound() const;