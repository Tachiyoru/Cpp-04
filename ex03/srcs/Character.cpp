/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:53:35 by sleon             #+#    #+#             */
/*   Updated: 2023/05/12 16:39:57 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout<<"Character default constructor called"<<std::endl;
	this->_name = "Adventurer";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 5; i++)
		this->_floor[i] = NULL;
}

Character::Character(const std::string name) : _name(name){
	std::cout<<"Named character constructor called"<<std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 5; i++)
		this->_floor[i] = NULL;
}

Character::Character(Character const &toCopy){
	std::cout<<"Character copy constructor called"<<std::endl;
	*this = toCopy;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 5; i++)
		if (this->_floor[i])
			delete this->_floor[i];
	std::cout<<"Character destructor called"<<std::endl;
}

Character &Character::operator=(Character const & to_copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (to_copy._inventory[i])
			*this->_inventory[i] = *to_copy._inventory[i]->clone();
	}
	for (int i = 0; i < 5; i++)
	{
		if (this->_floor[i])
			delete this->_floor[i];
		if (to_copy._floor[i])
			*this->_floor[i] = *to_copy._floor[i]->clone();
	}
	this->_name = to_copy._name;
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

std::string const &Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria* m){
	int	y = 0;

	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			std::cout<<"stored in :"<<i<<std::endl;
			this->_inventory[i] = m;
			y = 1;
			break ;
		}
	if (!y)
		std::cout<<"No more room for another materia"<<std::endl;
}

void	Character::unequip(int idx){
	int	y = 0;
	if (this->_inventory[idx])
	{
		for (int i = 0; i < 5; i++)
			if (!this->_floor[i])
			{
				this->_floor[i] = this->_inventory[idx];
				delete this->_inventory[idx];
				y = 1;
			}
		if (!y)
			std::cout<<"No more space on the floor"<<std::endl;
	}
	else
		std::cout<<"this slot is empty"<<std::endl;
}

void	Character::printInventory() const
{
	std::cout<<_name<<"'s inventory :"<<std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << i << ": is empty" << std::endl;
	}
	std::cout<<std::endl<<"on the floor:"<<std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (this->_floor[i])
			std::cout << i << ": " << this->_floor[i]->getType() << std::endl;
		else
			std::cout << i << ": is empty" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >= 0)
	{
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
		else
			std::cout<<"There is no materia in this slot"<<std::endl;
	}
	else
		std::cout<<"this slot doesn't exist"<<std::endl;
}
