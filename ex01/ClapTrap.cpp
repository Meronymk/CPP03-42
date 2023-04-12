/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:29:54 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 03:01:54 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap " << "(to be named)" << " Created" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	std::cout << "ClapTrap " << getName() << " Created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << getName() << " Destroyed" << std::endl;	
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hp == 0 || this->_ep <= 0)
	{
		std::cout << "ClapTrap " << getName() << " can't attack" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage!" << std::endl;
		this->setEp(-1);
	}
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & copy)
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ad = copy._ad;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " received " << amount << " points of damage!" << std::endl;
	this->_hp -= amount;
	if (this->_hp < 0)
		setHp(0);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " regained " << amount << " Health Points!" << std::endl;
	this->_hp += amount;
	if (this->_hp > 10)
		setHp(10);
}

std::string ClapTrap::getName(void)
{
	return(this->_name);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

int ClapTrap::getHp(void)
{
	return(this->_hp);
}

void ClapTrap::setHp(int value)
{
	this->_hp = value;
}
int ClapTrap::getEp(void)
{
	return(this->_ep);
}

void ClapTrap::setEp(int ep)
{
	this->_ep += ep;
}

void ClapTrap::noEp(void)
{
	this->_ep = 0;
}

int ClapTrap::getAd(void)
{
	return(this->_ad);
}

void ClapTrap::setAd(int ad)
{
	this->_ad = ad;
}
