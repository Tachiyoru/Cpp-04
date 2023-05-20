/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:52:18 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 14:27:19 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* Manu = new Character("Manu");
	AMateria* tmp;
	std::cout<<std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout<<std::endl;
	tmp = src->createMateria("ice");
	Manu->equip(tmp);
	std::cout<<std::endl;
	tmp = src->createMateria("cure");
	Manu->equip(tmp);
	std::cout<<std::endl;

	ICharacter* bob = new Character("bob");
	std::cout<<std::endl;

	Manu->printInventory();
	Manu->use(0, *bob);
	Manu->use(1, *bob);
	std::cout<<std::endl;

	Manu->unequip(1);
	Manu->printInventory();
	std::cout<<std::endl;

	delete bob;
	delete Manu;
	delete src;
	return 0;
}
