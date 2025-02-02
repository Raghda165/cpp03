/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:43:51 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 23:29:11 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap (std::string name):ClapTrap(name + "_clap_name"),ScavTrap(name + "_clap_name"),FragTrap(name + "_clap_name")
{
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
    _energypoints = ScavTrap::_energypoints;
    _attackdamage = FragTrap::_attackdamage;
}

void DiamondTrap:: whoAmI()
{
	std::cout <<"this is me diamondtrap "<<this->_name<<" which is "<<ClapTrap::_name<<" claptrap"<<"\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"this is diamond trap has lost and deleted"<<"\n";
}
