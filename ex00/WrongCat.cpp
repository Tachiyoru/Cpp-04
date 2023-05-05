/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:25:49 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 15:38:53 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("duck", "C O I N"){
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type, "coin"){
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type, std::string sound) : WrongAnimal(type, sound){
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat &toCopy )
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat &other){
	this->_type = other._type;
	this->_sound = other._sound;
	return(*this);
}
