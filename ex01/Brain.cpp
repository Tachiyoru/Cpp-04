/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:53:42 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 13:48:12 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy ){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &toCopy){
	if (this != &toCopy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = toCopy.ideas[i];
	return(*this);
}
