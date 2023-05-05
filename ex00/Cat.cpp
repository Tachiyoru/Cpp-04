/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:25:49 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 15:38:53 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Weird Cat", "M I A O U"){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type, "miaou"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type, std::string sound) : Animal(type, sound){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat &toCopy )
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat &other){
	this->_type = other._type;
	this->_sound = other._sound;
	return(*this);
}
