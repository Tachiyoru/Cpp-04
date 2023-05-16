/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:54:10 by sleon             #+#    #+#             */
/*   Updated: 2023/05/10 18:47:57 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy){
	*this = toCopy;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
	std::cout<<"MateriaSource destructor called"<<std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy){
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (toCopy._materias[i])
			this->_materias[i] = toCopy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m){
	int	i = -1;
	while (++i < 4)
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			std::cout<<m->getType()<<" type materia learned"<<std::endl;
			break;
		}
	if (i == 4)
		std::cout<<"Can't learn anymore materia"<<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4 && this->_materias[i]; i++)
	{
		if (type == this->_materias[i]->getType())
			return this->_materias[i]->clone();
	}
	std::cout<<"Could not find "<<type<<" type materia in the source";
	return (NULL);
}
