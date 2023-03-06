/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:59:46 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 10:59:47 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
	this->type = "Abstract AAnimal";
}

AAnimal::AAnimal(const AAnimal &aanimal)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = aanimal;
}

AAnimal::~AAnimal() {std::cout << "AAnimal default destructor called" << std::endl;}

AAnimal& AAnimal::operator= (const AAnimal &copy)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

std::string const&	AAnimal::getType(void) const {return (this->type);}

void	AAnimal::makeSound() const
{
	std::cout << "*abstract aanimal sounds*" << std::endl;
}
