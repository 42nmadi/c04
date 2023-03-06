/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:15 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 11:05:50 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal
{
	public:
		//* actions
		virtual void	makeSound() const;

		//* getters
		std::string const&	getType() const;

		//* constructors, destructors, and operator overloaders
		AAnimal & operator= (const AAnimal &copy);
		virtual	~AAnimal();
	protected:
		std::string	type;
		AAnimal();
		AAnimal(const AAnimal &aanimal);
};

#endif