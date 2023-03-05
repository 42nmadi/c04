/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:59:25 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/05 19:24:50 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		//* getters
		std::string const&	getIdea(unsigned int i);

		//* setters
		void	setIdea(std::string idea, unsigned int i);

		//* constructors, destructors, and operator overloaders
		Brain();
		Brain(const Brain &brain);
		Brain & operator= (const Brain &copy);
		~Brain();
};

#endif