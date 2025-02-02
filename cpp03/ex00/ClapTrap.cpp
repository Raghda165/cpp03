/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:01:12 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 13:08:14 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
ClapTrap  & ClapTrap:: operator=(const ClapTrap & other)
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

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	 _hitpoints = 10;
	 _energypoints= 10;
	 _attackdamage = 0;
	std::cout << this->_name<<" ClapTrap has been created"<<"\n";
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	_name= std::string(obj._name);
	_hitpoints=int(obj._hitpoints);
	 _energypoints = int(obj._energypoints);
	 _attackdamage = int(obj._attackdamage);
}

void ClapTrap:: attack(const std::string& target)
{
	if(_hitpoints<=0)
		std::cout<<"this ClapTrap can not do anything because he has not any hitspoint"<<"\n";
	std::cout << "ClapTrap "<<this->_name<<" attacks "<<target<<", causing "
	<<this ->_attackdamage <<" points of damage!"<<"\n";
	this->_hitpoints--;
}
ClapTrap::~ClapTrap()
{
	std::cout << this ->_name<<" ClapTrap"<<"has lost and deleted "<<"\n";
}
