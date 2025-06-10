/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 12:19:01 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);					// Canonical: Default Constructor
		FragTrap(FragTrap const & src);				// Canonical: Copy Constructor
		~FragTrap(void);							// Canonical: Destructor
		
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;
		
	
		FragTrap & operator=(FragTrap const & rhs);	// Canonical: Copy Assignement Operator

		virtual void	attack(const std::string & target);
		void			highFivesGuys(void);		
};

#endif