/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:20:33 by sleon             #+#    #+#             */
/*   Updated: 2023/05/10 17:29:58 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type){
	std::cout << "Constructor AMateria called" << std::endl;
	return;
}

AMateria::AMateria(){
	std::cout<<"AMateria default constructor called"<<std::endl;
}


AMateria::AMateria(AMateria const &src){
	std::cout<<"AMateria copy constructor called"<<std::endl;
	*this = src;
}

AMateria::~AMateria(){
	std::cout<<"AMateria destructor called"<<std::endl;
}

AMateria	&AMateria::operator=(const AMateria &toCopy){
	this->_type = toCopy._type;
	return *(this);
}

const std::string	&AMateria::getType( void ) const{
	return this->_type;
}
