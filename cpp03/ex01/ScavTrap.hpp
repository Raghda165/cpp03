/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:15:16 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/02 20:31:12 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP
#include "ClapTrap.hpp"

 class ScavTrap:public ClapTrap
 {
	 public:
		 ScavTrap(std::string name);
		 ScavTrap(const ScavTrap &obj);
		 ScavTrap & operator=(const ScavTrap &other);
		 ~ScavTrap();
		 void guardGate();
 };
#endif
