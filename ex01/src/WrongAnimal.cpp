/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:53:01 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:54:11 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "Abstract WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wronganimal;
}

WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal default destructor called" << std::endl;}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

std::string const&	WrongAnimal::getType(void) const {return (this->type);}

void	WrongAnimal::makeSound() const
{
	std::cout << "*abstract wrong animal sounds*" << std::endl;
}
