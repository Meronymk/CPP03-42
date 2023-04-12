/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:04:26 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 03:16:59 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap{
private:

public:
	~FragTrap();
	FragTrap(std::string name);
	void attack3(const std::string& target);
	void takeDamage3(unsigned int amount);
	void highFivesGuys(void);
};

#endif