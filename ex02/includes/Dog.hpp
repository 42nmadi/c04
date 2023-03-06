/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:29 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 11:24:18 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		//* actions
		void	makeSound() const;

		//* getters
		Brain	*getBrain(void) const;

		//* constructors, destructors, and operator overloaders
		Dog();
		Dog(const Dog &dog);
		Dog & operator= (const Dog &copy);
		~Dog();
	private:
		Brain	*brain;
};

#endif