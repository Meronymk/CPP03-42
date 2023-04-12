/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:18:21 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 02:46:54 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(){
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap " << getName() << " Created" << std::endl;	
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " Entered Gate keeper mode" << std::endl;	
}

void ScavTrap::attack2(const std::string& target)
{
	if (this->_hp == 0 || this->_ep <= 0)
	{
		std::cout << "ScavTrap " << getName() << " can't attack" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage!" << std::endl;
		this->setEp(-1);
	}
}

void ScavTrap::takeDamage2(unsigned int amount)
{
	std::cout << "ScavTrap " << getName() << " received " << amount << " points of damage!" << std::endl;
	this->_hp -= amount;
	if (this->_hp < 0)
		setHp(0);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << getName() << " Destroyed" << std::endl;	
}