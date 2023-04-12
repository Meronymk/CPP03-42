/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:30:03 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 02:54:22 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

# include <iostream>
# include <string>

class ClapTrap{
protected:
	std::string _name;
	int	_hp;
	int _ep;
	int _ad;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap( ClapTrap const & copy );
	ClapTrap &operator=(ClapTrap const & copy);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void);
	void setName(std::string name);
	int getHp(void);
	void setHp(int hp);
	int getEp(void);
	void setEp(int value);
	void noEp(void);
	int getAd(void);
	void setAd(int ad);
};

#endif