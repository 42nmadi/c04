/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:48:34 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:52:18 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "Animal.hpp"

class WrongAnimal
{
	public:
		//* actions
		void	makeSound() const;

		//* getters
		std::string const&	getType() const;

		//* constructors, destructors, and operator overloaders
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		WrongAnimal & operator= (const WrongAnimal &copy);
		~WrongAnimal();
	protected:
		std::string	type;
};

#endif