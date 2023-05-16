/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:40:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 14:25:44 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog", "W O U F"){
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type, "waf"){
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type, std::string sound) : Animal(type, sound){
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog &toCopy ){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog &toCopy){
	std::cout << "Dog to Dog assignement" << std::endl;
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
		this->_sound = toCopy._sound;
		*this->_brain = *toCopy._brain;
	}
	return(*this);
}

Animal	&Dog::operator=(Animal &toCopy){
	std::cout << "Dog to Animal called" << std::endl;
	this->_type = toCopy.getType();
	this->_sound = toCopy.getSound();
	*this->_brain = *toCopy.getBrain();
	return *this;
}


Brain *Dog::getBrain(void) const{
	return (_brain);
}
