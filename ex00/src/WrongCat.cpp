/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:54:21 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:55:23 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat::~WrongCat() {std::cout << "WrongCat default destructor called" << std::endl;}

WrongCat& WrongCat::operator= (const WrongCat &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow!" << std::endl;
}
