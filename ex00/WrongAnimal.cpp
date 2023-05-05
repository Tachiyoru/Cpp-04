/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:58:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 16:07:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Any wrong animal"), _sound("a wrong indescribable sound"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type), _sound(" a wrong indescribable sound"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type, std::string sound) : _type(type), _sound(sound){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal &toCopy )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &toCopy){
	this->_type = toCopy._type;
	return(*this);
}

void	WrongAnimal:: makeSound() const{
	std::cout << _type << " open its mouth and : "<< _sound <<std::endl;
}

const std::string WrongAnimal::getType() const{
	return (this->_type);
}

std::string WrongAnimal::getSound(){
	return (this->_sound);
}
