/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:42:12 by sleon             #+#    #+#             */
/*   Updated: 2023/05/10 18:43:26 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &toCopy);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &toCopy);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif
