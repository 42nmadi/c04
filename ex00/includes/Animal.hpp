/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:40:05 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:49:58 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		//* actions
		virtual void	makeSound() const;

		//* getters
		std::string const&	getType() const;

		//* constructors, destructors, and operator overloaders
		Animal();
		Animal(const Animal &animal);
		Animal & operator= (const Animal &copy);
		virtual	~Animal();
	protected:
		std::string	type;
};

#endif