/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:34:36 by sleon             #+#    #+#             */
/*   Updated: 2023/05/10 18:42:49 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout<<"ice materia constructor called"<<std::endl;
}

Ice::Ice(Ice const &toCopy) : AMateria("ice"){
	std::cout<<"ice copy constructor called"<<std::endl;
	*this = toCopy;
}

Ice::~Ice(){
	std::cout<<"ice destructor called"<<std::endl;
}

Ice	&Ice::operator=(const Ice &toCopy){
	this->_type = toCopy._type;
	return *(this);
}

AMateria	*Ice::clone() const{
	return (new Ice());
}

void	Ice::use(ICharacter &target){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}

// AMateria	&Ice::operator=(const AMateria &toCopy){
// 	this->getType() = toCopy.getType();
// 	return *(this);
// }
