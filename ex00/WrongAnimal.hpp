/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:57:42 by sleon             #+#    #+#             */
/*   Updated: 2023/05/05 15:58:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <sstream>
# include <iostream>

class WrongAnimal
{
	protected :
		std::string	_type;
		std::string	_sound;
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal &src );
		WrongAnimal(std::string type, std::string sound);
		virtual ~WrongAnimal();

		const std::string getType() const;
		std::string getSound();

		WrongAnimal	&operator=( WrongAnimal &toCopy);

		void	makeSound() const;
};

#endif
