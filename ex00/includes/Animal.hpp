/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:40:05 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 17:45:34 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal(); // default constructor
		Animal(const Animal &animal); // copy constructor
		Animal & operator= (const Animal &animal); // copy assignment operator
		virtual				~Animal(); // destructor
		std::string const&	getType() const;
		virtual void		makeSound() const;
	protected:
		std::string	type;
};

#endif