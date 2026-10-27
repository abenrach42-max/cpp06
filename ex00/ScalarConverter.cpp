/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:27:12 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/12 18:27:12 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::convert(const std::string &str)
{
    double a = std::atof(str.c_str());
    if (str.size() == 1 && !std::isdigit(str.c_str()[0]))
        a = static_cast<double>(str.c_str()[0]);
        
    // pour un char (on veut que du ascii donc de 0 a 127)
    if (std::isnan(a) ||static_cast<int>(a) > 127 || static_cast<int>(a) < 0)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(a)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;

    // pour un int
    if (a < INT_MIN || a > INT_MAX)
        std::cout << "int: overflow" << std::endl;
    else if (std::isnan(a) || std::isinf(a))
        std::cout << "int :impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(a) << std::endl;

    // pour les floats
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;

    // pour les double
    std::cout << "double: " << a << std::endl;
    return ;
}