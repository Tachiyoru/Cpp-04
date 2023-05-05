/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:12:39 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 15:28:38 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Any animal"), _sound("indescribable sound"){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type), _sound("indescribable sound"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type, std::string sound) : _type(type), _sound(sound){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal &toCopy )
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal &toCopy){
	this->_type = toCopy._type;
	return(*this);
}

void	Animal:: makeSound() const{
	std::cout << _type << " open its mouth and : "<< _sound <<std::endl;
}

const std::string Animal::getType() const{
	return (this->_type);
}

std::string Animal::getSound(){
	return (this->_sound);
}
