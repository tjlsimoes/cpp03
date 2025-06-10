/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 11:14:56 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <limits.h>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;

	public:
		ClapTrap(std::string name);					// Canonical: Default Constructor
		ClapTrap(ClapTrap const & src);				// Canonical: Copy Constructor
		~ClapTrap(void);							// Canonical: Destructor
	
		ClapTrap & operator=(ClapTrap const & rhs);	// Canonical: Copy Assignement Operator
		
		std::string		get_name(void);
		unsigned int	get_health(void);
		unsigned int	get_energy(void);
		unsigned int	get_damage(void);
		
		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif