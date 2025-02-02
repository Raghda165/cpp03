/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:52 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 23:32:20 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
#define DIAMONDTRAP
 #include "ScavTrap.hpp"
 #include "FragTrap.hpp"
 class DiamondTrap : public ScavTrap , public FragTrap
 {
	private:
		std::string _name;
	public:
		DiamondTrap (std::string name);
		void attack(const std::string& target)
		{
			ScavTrap::attack(target);
		}
		void whoAmI();
		~DiamondTrap();




 };

#endif
