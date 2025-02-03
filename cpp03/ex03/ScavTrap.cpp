/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:15:11 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/02 21:21:17 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
ScavTrap :: ScavTrap(std::string name):ClapTrap(name)
{
	_hitpoints = 100;
	_attackdamage = 20;
	_energypoints = 50;
	std::cout << this->_name<<" ScavTrap has been created"<<"\n";
}
ScavTrap ::  ScavTrap(const ScavTrap &obj):ClapTrap(obj._name)
{
	_name= std::string(obj._name);
	_hitpoints=int(obj._hitpoints);
	 _energypoints = int(obj._energypoints);
	 _attackdamage = int(obj._attackdamage);
}
ScavTrap  & ScavTrap:: operator=(const ScavTrap & other)
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

ScavTrap::~ScavTrap()
{
	std::cout << this ->_name<<" ScavTrap"<<" has been lost and deleted "<<"\n";
}

void ScavTrap:: attack(const std::string& target)
{
	if(_hitpoints<=0 || _energypoints <= 0)
		std::cout<<"this ScavTrap can not do anything because he has not any hitspoint"<<"\n";
	else
	{
		_energypoints--;
		std::cout << "ScavTrap "<<this->_name<<" attacks "<<target<<", causing "
		<<this ->_attackdamage <<" points of damage!"<<"\n";
	}
}

void  ScavTrap::guardGate()
{
	std::cout<< this ->_name<< " ScavTrap is now in Gate keeper"<<"\n";
}

