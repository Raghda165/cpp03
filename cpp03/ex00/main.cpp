/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:01:01 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/02 20:27:08 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
	ClapTrap obj("raghda");
	obj.attack("rabwa");
	obj.takeDamage(3);
	obj.beRepaired(2);
}
