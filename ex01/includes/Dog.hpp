/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:40:43 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:41:25 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		//* actions
		void	makeSound() const;

		//* constructors, destructors, and operator overloaders
		Dog();
		Dog(const Dog &dog);
		Dog & operator= (const Dog &copy);
		~Dog();
};

#endif