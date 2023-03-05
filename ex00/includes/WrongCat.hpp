/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:46:44 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:52:49 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//* actions
		void	makeSound() const;

		//* constructors, destructors, and operator overloaders
		WrongCat();
		WrongCat(const WrongCat &wrongcat);
		WrongCat & operator= (const WrongCat &copy);
		~WrongCat();
};

#endif