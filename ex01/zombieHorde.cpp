/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-06 18:50:21 by ibarbouc          #+#    #+#             */
/*   Updated: 2026-02-06 18:50:21 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
    
    int i = 0;
    Zombie *horde = new Zombie[N];
    
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}