/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:33 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 11:00:33 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

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