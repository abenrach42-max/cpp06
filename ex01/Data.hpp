/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:29:57 by marvin            #+#    #+#             */
/*   Updated: 2026/10/12 21:29:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <exception>

class   Data
{
    private:
        std::string _name;
        int _value;
    public:
        Data(const std::string &name, int value);
        Data(const Data &dt);
        Data    &operator=(const Data &dt);
        ~Data(void);
        std::string getName(void) const;
        int         getValue(void) const;
};

#endif