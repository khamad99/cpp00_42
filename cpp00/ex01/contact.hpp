/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:31:40 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/07 17:41:03 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class contact
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
	int				_index;
public:
	contact();
	~contact();
};

#endif