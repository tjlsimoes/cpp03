/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/12 11:37:04 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(), _name("FragTrap")	// Default Constructor
{
	std::cout << "Frag Default constructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name)	// Parameterized Constructor
{
	std::cout << "Frag Parameterized constructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name)	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag Destructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::attack(const std::string & target)
{
	if (this->_energy != 0 && this->_health != 0)
	{
		std::cout
			<< "FragTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_damage
			<< " points of damage!"
			<< std::endl;
		this->_energy--;
	}
	else
		std::cout
			<< "FragTrap " << this->_name
			<< " is out of energy."
			<< std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_health != 0 && this->_energy != 0)
	{
		std::cout
			<< "FragTrap " << this->_name
			<< " asks, do you want to high five?"
			<< std::endl;
	}
}
