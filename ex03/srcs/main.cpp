/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:52:18 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 15:47:16 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	ICharacter* Manu = new Character("Manu");
// 	AMateria* tmp;
// 	std::cout<<std::endl;

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	std::cout<<std::endl;
// 	tmp = src->createMateria("ice");
// 	Manu->equip(tmp);
// 	std::cout<<std::endl;
// 	tmp = src->createMateria("cure");
// 	Manu->equip(tmp);
// 	tmp = src->createMateria("ice");
// 	Manu->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	Manu->equip(tmp);
// 	std::cout<<std::endl;

// 	ICharacter* bob = new Character("bob");
// 	std::cout<<std::endl;

// 	Manu->printInventory();
// 	std::cout<<std::endl;

// 	Manu->use(0, *bob);
// 	Manu->use(1, *bob);
// 	std::cout<<std::endl;

// 	Manu->unequip(1);
// 	Manu->unequip(0);
// 	Manu->printInventory();
// 	std::cout<<std::endl;
// 	Manu->equip(Manu->getFloor(0));
// 	Manu->printInventory();

// 	delete bob;
// 	delete Manu;
// 	delete src;
// 	return 0;
// }

int main()
{
	Character Shanley("Shanley");
	Character Manu("Manu");
	AMateria *tmp;

	tmp = new Ice();
	Shanley.equip(tmp);
	tmp = new Cure();
	Shanley.equip(tmp);
	tmp = new Ice();
	Shanley.equip(tmp);
	tmp = new Cure();
	Shanley.equip(tmp);
	tmp = new Cure();
	Shanley.equip(tmp);
	Shanley.printInventory();

	std::cout << std::endl;

	Shanley.unequip(0);
	Shanley.printInventory();


	ICharacter *bob = new Character("bob");
	Shanley.use(2, *bob);
	Shanley.use(3, Shanley);

	// ne doit rien faire
	Shanley.use(5, *bob);
	Shanley.use(0, *bob);

	tmp = new Cure();
	Manu.equip(tmp);
	Manu.printInventory();
	Manu = Shanley;
	Manu.unequip(0);
	Manu.unequip(2);
	Manu.use(2, Shanley);
	Manu.use(3, Shanley);
	Manu.printInventory();
	Shanley.printInventory();
	delete bob;
	return (0);
}
