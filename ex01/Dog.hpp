/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:41:53 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 15:15:11 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(std::string type);
		Dog( Dog &src );
		Dog(std::string type, std::string sound);
		~Dog();

		Dog	&operator=(Dog &other);
		virtual Animal	&operator=( Animal &toCopy);

		virtual	Brain	*getBrain(void) const;
};

#endif
