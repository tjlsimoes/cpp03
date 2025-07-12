/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/12 11:38:07 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									// Canonical: Default Constructor
		ScavTrap(std::string name);					// Parameterized Constructor
		ScavTrap(ScavTrap const & src);				// Canonical: Copy Constructor
		~ScavTrap(void);							// Canonical: Destructor
		
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;
		
	
		ScavTrap & operator=(ScavTrap const & rhs);	// Canonical: Copy Assignement Operator

		virtual void	attack(const std::string & target);
		void			guardGate(void);		
};

#endif