/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:45:10 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 14:10:28 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl << std::endl;
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << std::endl;
	std::cout << catWrong->getType() << std::endl;
	catWrong->makeSound();
	std::cout << std::endl;
	std::cout << metaWrong->getType() << std::endl;
	metaWrong->makeSound();
	std::cout << std::endl;
	delete metaWrong;
	delete catWrong;
	return(0);
}
