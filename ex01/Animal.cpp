/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:12:39 by sleon             #+#    #+#             */
/*   Updated: 2023/05/16 15:41:34 by sleon            ###   ########.fr       */
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

Animal	&Animal::operator=(Animal &rhs){
	this->_type = rhs.getType();
	return(*this);
}

void	Animal:: makeSound() const{
	std::cout << _type << " open its mouth and : "<< _sound <<std::endl;
}

const std::string	&Animal::getType() const{
	return (this->_type);
}

const std::string	&Animal::getSound() const{
	return (this->_sound);
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance)
{
	ostream << instance.getType();;
	return ostream;
}
