/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:08:57 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 16:47:24 by ryagoub          ###   ########.fr       */
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


FragTrap::~FragTrap()
{
	std::cout << this ->_name<<" FragTrap"<<" has been lost and deleted "<<"\n";
}
void FragTrap:: highFivesGuys(void)
{
	std::cout <<"High five 🙋🏻‍♀️"<<"\n";
}
