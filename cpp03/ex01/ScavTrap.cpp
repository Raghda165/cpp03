/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:15:11 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 16:46:55 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
ScavTrap :: ScavTrap(std::string name):ClapTrap(name)
{
	_hitpoints = 100;
	_attackdamage = 20;
	_energypoints = 50;
	std::cout << this->_name<<" ScavTrap has been created";
	std::cout << " with hit points = "<<this->_hitpoints<<", energy points = "
	<<this ->_energypoints <<" and attack damge = "<<this->_attackdamage<<"\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this ->_name<<" ScavTrap"<<" has been lost and deleted "<<"\n";
}

void  ScavTrap::guardGate()
{
	std::cout<< this ->_name<< " ScavTrap is now in Gate keeper"<<"\n";
}

