/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:27:15 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 14:11:51 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(std::string type);
		Cat( Cat &src );
		Cat(std::string type, std::string sound);
		~Cat();

		Cat	&operator=(Cat &other);
		virtual Animal	&operator=( Animal &toCopy);

		virtual Brain *getBrain(void) const;
};

#endif
