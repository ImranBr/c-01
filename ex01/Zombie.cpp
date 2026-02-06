
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-06 18:50:00 by ibarbouc          #+#    #+#             */
/*   Updated: 2026-02-06 18:50:00 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    _name = name;
}

void Zombie::announce() const
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}