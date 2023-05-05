/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:06:30 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 15:50:16 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <sstream>
# include <iostream>

class Animal
{
	protected :
		std::string	_type;
		std::string	_sound;
	public :
		Animal();
		Animal(std::string type);
		Animal( Animal &src );
		Animal(std::string type, std::string sound);
		virtual ~Animal();

		const std::string getType() const;
		std::string getSound();

		Animal	&operator=( Animal &toCopy);

		void	makeSound() const;
};

#endif
