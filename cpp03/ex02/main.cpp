/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:01:01 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/01 16:45:16 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main()
{
	FragTrap obj("raghda");
	obj.attack("rabwa");
	obj.highFivesGuys();
	FragTrap obj2(obj);
	obj2 = obj;
}
