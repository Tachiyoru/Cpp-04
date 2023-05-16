/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:52:18 by sleon             #+#    #+#             */
/*   Updated: 2023/05/15 13:56:32 by sleon            ###   ########.fr       */
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

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	Manu->equip(tmp);
	tmp = src->createMateria("cure");
	Manu->equip(tmp);

	ICharacter* bob = new Character("bob");

	Manu->printInventory();
	Manu->use(0, *bob);
	Manu->use(1, *bob);

	delete bob;
	delete Manu;
	delete src;
	return 0;
}
