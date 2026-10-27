/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:21:14 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/15 18:37:02 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"

int main(void)
{
    // pour pouvoir faire fonctionner rand dans Base::generate
    srand(time(NULL));

    Base    *x;

    x = generate();
    // test avec pointer
    identify(x);
    // test avec une reference
    identify(*x);
    return (0);
}