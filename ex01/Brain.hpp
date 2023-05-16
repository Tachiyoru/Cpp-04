/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:20:52 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 13:31:01 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public :
		Brain();
		Brain(const Brain &src );
		~Brain();

		Brain	&operator=(const Brain &toCopy);

		std::string	ideas[100];
};

#endif
