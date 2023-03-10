/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadi <nmadi@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:00:01 by nmadi             #+#    #+#             */
/*   Updated: 2023/03/07 20:29:14 by nmadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

// int	main()
// {
// 	const WrongAnimal *i = new WrongCat();
// 	const AAnimal *j = new Dog();
// 	const WrongAnimal *meta = new WrongAnimal();

// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << meta->getType() << " " << std::endl;

// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();

// 	delete i;
// 	delete j;
// 	delete meta;
// 	return (0);
// }

int	main(void)
{
	AAnimal	*animals[10];

	//* Malloc first half with dogs
	for (int i = 0; i < 5; i++)
	{
		animals[i] = new Dog();
	}
	//* Malloc other half with cats
	for (int i = 5; i < 10; i++)
	{
		animals[i] = new Cat();
	}
	//* Delete every animal
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return (0);
}