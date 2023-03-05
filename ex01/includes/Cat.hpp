/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:40:20 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 18:41:19 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		//* actions
		void	makeSound() const;

		//* constructors, destructors, and operator overloaders
		Cat();
		Cat(const Cat &cat);
		Cat & operator= (const Cat &copy);
		~Cat();
};

#endif