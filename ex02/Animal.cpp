/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:12:39 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 15:17:36 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
