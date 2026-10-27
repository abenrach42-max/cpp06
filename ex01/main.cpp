/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:23:29 by marvin            #+#    #+#             */
/*   Updated: 2026/10/12 21:23:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
    uintptr_t   x;
    Data    *pipi;
    Data *base_donnee = new Data("caca", 42);
    std::cout << base_donnee->getName() << " with " << base_donnee->getValue() << " adress is "<< base_donnee << std::endl;
    (void)x;
    std::cout << "On serialize bien comme il faut" << std::endl;
    x = Serializer::serialize(base_donnee);
    std::cout << "On deserialize et on le redonne a pipi" << std::endl;
    pipi = Serializer::deserialize(x);
    std::cout << pipi->getName() << " with " << pipi->getValue() << " adress is "<< pipi << std::endl;
    std::cout << base_donnee->getName() << " with " << base_donnee->getValue() << " adress is "<< base_donnee << std::endl;
    std::cout << "pipi et base_donne partage la meme adresse memoire et on peux desialize avec x \ncomme ca plusieur base de donnee par exemple partage la meme adresse memoire \ndonc quand il y aura un changement dans la base de donnee, \ntoute les bases de donnes seront touche par ce changement" << std::endl;
    delete base_donnee;
    return (0);
}