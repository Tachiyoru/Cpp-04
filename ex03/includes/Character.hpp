/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:26 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 15:07:39 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		AMateria	*_inventory[4];
		AMateria	*_floor[5];
		std::string	_name;
	public:
		Character();
		Character(const std::string name);
		Character(const Character &toCopy);
		~Character();

		Character	&operator=(const Character &toCopy);
		ICharacter	&operator=(const ICharacter &toCopy);

		AMateria	*getFloor(int idx) const;
		std::string	const &getName() const;
		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
		void		printInventory() const;
};

#endif
