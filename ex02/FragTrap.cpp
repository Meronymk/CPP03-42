/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:04:14 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 03:15:35 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(){
	_name = name;
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap " << getName() << " Created" << std::endl;	
};

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " is asking for a High Five!" << std::endl;	
}

void FragTrap::attack3(const std::string& target)
{
	if (this->_hp == 0 || this->_ep <= 0)
	{
		std::cout << "FragTrap " << getName() << " can't attack" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage!" << std::endl;
		this->setEp(-1);
	}
}

void FragTrap::takeDamage3(unsigned int amount)
{
	std::cout << "FragTrap " << getName() << " received " << amount << " points of damage!" << std::endl;
	this->_hp -= amount;
	if (this->_hp < 0)
		setHp(0);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << getName() << " Destroyed" << std::endl;	
}