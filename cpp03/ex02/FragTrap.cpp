/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:08:57 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/02 20:49:51 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
FragTrap :: FragTrap(std::string name):ClapTrap(name)
{
	_hitpoints = 100;
	_attackdamage = 30;
	_energypoints = 100;
	std::cout << this->_name<<" FragTrap has been created";
	std::cout << " with hit points = "<<this->_hitpoints<<", energy points = "
	<<this ->_energypoints <<" and attack damge = "<<this->_attackdamage<<"\n";
}
FragTrap ::  FragTrap(const FragTrap &obj):ClapTrap(obj._name)
{
	_name= std::string(obj._name);
	_hitpoints=int(obj._hitpoints);
	 _energypoints = int(obj._energypoints);
	 _attackdamage = int(obj._attackdamage);
}
FragTrap  & FragTrap:: operator=(const FragTrap & other)
{
	if (this == &other)
		return (*this);
	else
	{
		this->_name  = other._name;
		this->_hitpoints = other._hitpoints;
		this-> _energypoints = other._energypoints;
		this->_attackdamage = other._attackdamage;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << this ->_name<<" FragTrap"<<" has been lost and deleted "<<"\n";
}
void FragTrap:: highFivesGuys(void)
{
	std::cout <<"High five "<<"\n";
}
