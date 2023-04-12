/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:29:37 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 02:58:17 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("R2-D2");
	ScavTrap clap2("BD-1");

	clap.attack(clap2.getName());
	clap2.takeDamage2(0);
	clap2.attack2(clap.getName());
	clap.takeDamage(20);
	clap.attack(clap2.getName());
	clap2.guardGate();
	return 0;
}