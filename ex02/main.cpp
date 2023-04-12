/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:29:37 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 03:22:18 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap clap2("BD-1");
	FragTrap clap3("FR-4G");

	clap3.attack3(clap2.getName());
	clap2.takeDamage2(30);
	clap2.attack2(clap3.getName());
	clap3.takeDamage3(20);
	clap3.attack3(clap2.getName());
	clap2.takeDamage2(30);
	clap2.guardGate();
	clap3.highFivesGuys();
	clap3.attack3(clap2.getName());
	clap2.takeDamage2(30);
	clap2.attack2(clap3.getName());
	clap3.takeDamage3(20);
	clap3.attack3(clap2.getName());
	clap2.takeDamage2(30);
	clap2.attack2(clap3.getName());
	return 0;
}