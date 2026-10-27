/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:29:47 by marvin            #+#    #+#             */
/*   Updated: 2026/10/12 21:29:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const std::string &name, int value) : _name(name), _value(value)
{
    //std::cout << "Data constructor called" << std::endl;
}

Data::Data(const Data &dt)
{
    *this = dt;
}

Data    &Data::operator=(const Data &dt)
{
    if (this != &dt)
    {
        this->_value = dt._value;
        this->_name = dt._name;
    }
    return (*this);
}

std::string Data::getName(void) const
{
    return (this->_name);
}

int Data::getValue(void) const
{
    return (this->_value);
}

Data::~Data(void)
{
    //std::cout << "Data destructor called" << std::endl;
}
