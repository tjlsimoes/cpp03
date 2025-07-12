/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/12 11:35:20 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _name("ScavTrap")	// Default Constructor
{
	std::cout << "Scav Default constructor called" << std::endl;
	_health = 100;
	_energy = 50;
	_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _name(name)	// Parameterized Constructor
{
	std::cout << "Scav Parameterized constructor called" << std::endl;
	_health = 100;
	_energy = 50;
	_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name)	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav Destructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy = rhs._energy;
		this->_health = rhs._health;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_energy != 0 && this->_health != 0)
	{
		std::cout
			<< "ScavTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_damage
			<< " points of damage!"
			<< std::endl;
		this->_energy--;
	}
	else
		std::cout
			<< "ScavTrap " << this->_name
			<< " is out of energy or... dead..."
			<< std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->_health != 0 && this->_energy != 0)
	{
		std::cout
			<< "ScavTrap " << this->_name
			<< " is now in Gate keeper mode."
			<< std::endl;
	}
}
