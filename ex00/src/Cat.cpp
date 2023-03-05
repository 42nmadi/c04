/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:39:33 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:54:25 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat() {std::cout << "Cat default destructor called" << std::endl;}

Cat& Cat::operator= (const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
