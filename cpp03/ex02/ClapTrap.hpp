/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:01:07 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 15:07:51 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
 #include <iostream>
 class ClapTrap{
	protected:
		std::string _name;
		int _hitpoints;
		int _energypoints;
		int _attackdamage;
	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap & operator=(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
 };
#endif
