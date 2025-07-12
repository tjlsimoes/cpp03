/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/12 11:35:06 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap")	// Default Constructor
{
	std::cout << "Default constructor called" << std::endl;
	_energy = 10;
	_health = 10;
	_damage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)	// Parameterized Constructor
{
	std::cout << "Parameterized constructor called" << std::endl;
	_energy = 10;
	_health = 10;
	_damage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::attack(const std::string & target)
{
	if (this->_energy != 0 && this->_health != 0)
	{
		std::cout
			<< "ClapTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_damage
			<< " points of damage!"
			<< std::endl;
		this->_energy--;
	}
	else
		std::cout
			<< "ClapTrap " << this->_name
			<< " is out of energy or... dead..."
			<< std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health != 0)
	{
		std::cout
			<< "ClapTrap " << this->_name 
			<< " has taken " << amount
			<< " points of damage!"
			<< std::endl;
		if (amount >= this->_health)
		{
			std::cout
			<< "ClapTrap " << this->_name 
			<< " has died!"
			<< std::endl;
			this->_health = 0;
		}
		else
			this->_health -= amount;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy != 0 && this->_health != 0)
	{
		std::cout
			<< "ClapTrap " << this->_name << " has gained "
			<< amount << " health points! "
			<< std::endl;
		if (this->_health + amount > UINT_MAX)
			this->_health = UINT_MAX;
		else
			this->_health += amount;
		this->_energy--;
	}
	else
		std::cout
		<< "ClapTrap " << this->_name
		<< " is out of energy or... dead..."
		<< std::endl;
	return ;
}
