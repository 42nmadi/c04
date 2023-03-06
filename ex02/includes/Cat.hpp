/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:23 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/06 11:04:24 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		//* actions
		void	makeSound() const;

		//* constructors, destructors, and operator overloaders
		Cat();
		Cat(const Cat &cat);
		Cat & operator= (const Cat &copy);
		~Cat();
	private:
		Brain	*brain;
};

#endif