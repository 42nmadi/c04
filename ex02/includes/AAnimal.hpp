/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:15 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/07 20:29:17 by nmadi            ###   ########.fr       */
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
		virtual void	makeSound() const = 0;

		//* getters
		std::string const&	getType() const;

		//* constructors, destructors, and operator overloaders
		AAnimal();
		AAnimal(const AAnimal &aanimal);
		AAnimal & operator= (const AAnimal &copy);
		virtual	~AAnimal();
	protected:
		std::string	type;
};

#endif