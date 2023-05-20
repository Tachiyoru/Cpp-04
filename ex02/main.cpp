/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:45:10 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 14:19:45 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	Animal	*animals[8];
	Brain	*brain;
	// Animal	test;

	for (int i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
		std::cout<<std::endl;
	}
	brain = animals[3]->getBrain();
	brain->ideas[0] = "Manu n'est pas venu aujourd'hui ce loser";
	brain->ideas[1] = "Pourquoi ?";
	brain->ideas[2] = "Je crois pas qu'il y ait de bonne ou de mauvaise siuation...";
	brain->ideas[3] = "grosse ambiance";
	std::cout<<"animal 3 = "<<std::endl;
	std::cout << animals[3]->getBrain()->ideas[0] << std::endl;

	*animals[5] = *animals[3];
	std::cout<<"animal 5 = "<<std::endl;
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	std::cout<<std::endl;

	for (int i = 0; i < 8; i++)
		delete animals[i];
	std::cout<<std::endl;

	Dog dog1;
	Dog dog2;

	std::cout<<std::endl<<std::endl;
	dog1.getBrain()->ideas[12]="qwertyuiop asdfghjkl zxcvbnm";
	std::cout << dog1.getBrain()->ideas[12] << std::endl;

	dog2 = dog1;
	std::cout << dog2.getBrain()->ideas[12] << std::endl;
	std::cout<<std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}
