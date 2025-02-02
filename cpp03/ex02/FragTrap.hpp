/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:08:46 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 16:47:32 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
 #include "ClapTrap.hpp"
 class FragTrap : public ClapTrap
 {
	public :
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
 };
#endif
