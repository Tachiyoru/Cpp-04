/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:23:24 by sleon             #+#    #+#             */
/*   Updated: 2023/05/10 18:42:44 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout<<"Cure materia constructor called"<<std::endl;
}

Cure::Cure(Cure const &toCopy) : AMateria("cure"){
	std::cout<<"Cure copy constructor called"<<std::endl;
	*this = toCopy;
}

Cure::~Cure(){
	std::cout<<"Cure destructor called"<<std::endl;
}

Cure	&Cure::operator=(const Cure &toCopy){
	this->_type = toCopy._type;
	return *(this);
}

AMateria	*Cure::clone() const{
	return (new Cure());
}

void	Cure::use(ICharacter &target){
	std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}

// AMateria	&Cure::operator=(const AMateria &toCopy){
// 	this->getType() = toCopy.getType();
// 	return *(this);
// }
