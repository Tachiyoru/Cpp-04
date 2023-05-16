/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:25:49 by sleon             #+#    #+#             */
/*   Updated: 2023/05/16 15:41:47 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat", "M I A O U"), _brain(new Brain()){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type, "miaou"), _brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type, std::string sound) : Animal(type, sound), _brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat &toCopy ){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = toCopy;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat &toCopy){
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
		this->_sound = toCopy._sound;
		*this->_brain = *toCopy._brain;
	}
	return(*this);
}

Animal	&Cat::operator=(Animal &toCopy){
	std::cout << "Cat to Animal called" << std::endl;
	this->_type = toCopy.getType();
	this->_sound = toCopy.getSound();
	*this->_brain = *toCopy.getBrain();
	return *this;
}

Brain *Cat::getBrain(void) const{
	return (_brain);
}
