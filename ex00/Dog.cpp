/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:40:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 13:43:51 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Weird Dog", "W O U F"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type, "waf"){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type, std::string sound) : Animal(type, sound){
}

Dog::Dog( Dog &toCopy )
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog &toCopy){
	this->_type = toCopy._type;
	return(*this);
}
