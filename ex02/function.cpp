/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:41:10 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/15 18:38:16 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"

Base    *generate(void)
{
    // sur les pcs de l'ecole rand max c'est int max vu que l'ecole utilise le meme compilateur partout sur ces pc (attention sur des pc personnelles par exemple rand max peut changer)
    int x = rand();
    
    if (x < (RAND_MAX / 3))
        return (new A());
    else if (x < (RAND_MAX / 3) * 2)
        return (new B());
    else
        return (new C());
    // rand ne peut pas echouer
}

void    identify(Base *p)
{
    std::cout << "identify pointer is use" << std::endl;
    A   *x = dynamic_cast<A*>(p);
    if (x == NULL)
        (void)x;
    else
    {
        std::cout << "It's A class" << std::endl;
        return ;
    }

    B   *y = dynamic_cast<B*>(p);
    if (y == NULL)
        (void)y;
    else
    {
        std::cout << "It's B class" << std::endl;
        return ;
    }

    C   *z = dynamic_cast<C*>(p);
    if (z == NULL)
        (void)z;
    else
    {
        std::cout << "It's C class" << std::endl;
        return ;
    }
    std::cout << "We are not able to identify if it's A, B or C class" << std::endl;
    return ;
}

void    identify(Base &p)
{
    std::cout << "identify reference is use" << std::endl;
    try
    {
        A   &x = dynamic_cast<A&>(p);
        std::cout << "It's A class" << std::endl;
        (void)x;
        return;
    }
    catch (std::exception &e){}
    try
    {
        B   &x = dynamic_cast<B&>(p);
        std::cout << "It's B class" << std::endl;
        (void)x;
        return;
    }
    catch (std::exception &e){}
    try
    {
        C   &x = dynamic_cast<C&>(p);
        std::cout << "It's C class" << std::endl;
        (void)x;
        return;
    }
    catch (std::exception &e)
    {
        std::cout << "We are not able to identify if it's A, B or C class" << std::endl;
    }
}