/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:41:36 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:46:28 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog() {std::cout << "Dog default destructor called" << std::endl;}

Dog& Dog::operator= (const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
