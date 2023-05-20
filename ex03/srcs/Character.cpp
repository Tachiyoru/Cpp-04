/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:53:35 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 15:47:39 by sleon            ###   ########.fr       */
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
		if (this->_inventory[i]){
			delete this->_inventory[i];}
	for (int i = 0; i < 5; i++)
		if (this->_floor[i]){
			delete this->_floor[i];
		}
	std::cout<<"Character destructor called"<<std::endl;
}

Character &Character::operator=(Character const & to_copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]){
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (to_copy._inventory[i])
			this->_inventory[i] = to_copy._inventory[i]->clone();
	}
	for (int i = 0; i < 5; i++)
	{
		if (this->_floor[i]){
			delete this->_floor[i];
			this->_floor[i] = NULL;
		}
		if (to_copy._floor[i])
			this->_floor[i] = to_copy._floor[i]->clone();
	}
	this->_name = to_copy._name;
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

std::string const &Character::getName() const{
	return (this->_name);
}

AMateria *Character::getFloor(int idx) const{
	return (this->_floor[idx]);
}

void	Character::equip(AMateria* m){
	int	y = 0;

	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			std::cout<<"stored in :"<<i<<std::endl;
			this->_inventory[i] = m;
			y = 1;
			for (int i = 0; i < 4 ; i++)	{
				if (this->_floor[i] == m){
					this->_floor[i] = NULL;
				}
			}
			break ;
		}
	if (!y){
		std::cout<<"No more room for another materia"<<std::endl;
		delete m;}
}

void	Character::unequip(int idx){
	int	y = 0;
	if (this->_inventory[idx])
	{
		for (int i = 0; i < 5; i++)
			if (!this->_floor[i])
			{
				this->_floor[i] = this->_inventory[idx];
				this->_inventory[idx] = NULL;
				std::cout<<"The materia has been droped on the floor."<<std::endl;
				y = 1;
				break;
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
