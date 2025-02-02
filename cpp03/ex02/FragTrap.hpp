/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:08:46 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/02 20:37:46 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
 #include "ClapTrap.hpp"
 class FragTrap : public ClapTrap
 {
	public :
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap & operator=(const FragTrap &other);
	~FragTrap();
	void highFivesGuys(void);
 };
#endif
