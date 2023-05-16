/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:40:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 15:23:03 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :_brain(new Brain()){
	this->_type = "Dog";
	this->_sound = "W O U F";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : _brain(new Brain()){
	this->_type = type;
	this->_sound = "waf";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type, std::string sound) : _brain(new Brain()){
	this->_type = type;
	this->_sound = sound;
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
