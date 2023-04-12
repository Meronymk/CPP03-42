/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:29:37 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 02:14:15 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("BB8");
	ClapTrap clap2("R2-D2");

	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.takeDamage(0);
	clap.attack(clap2.getName());
	clap2.beRepaired(0);
	return 0;
}