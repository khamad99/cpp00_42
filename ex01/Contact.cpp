/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:31:23 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/16 09:37:04 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_first_name() const
{
	return this->_first_name;
}

std::string	Contact::get_last_name() const
{
	return this->_last_name;
}

std::string	Contact::get_nickname() const
{
	return this->_nickname;
}

std::string	Contact::get_phone_number() const
{
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret() const
{
	return this->_darkest_secret;
}

int			Contact::get_index() const
{
	return this->_index;
}

void		Contact::set_index(int _index)
{
	this->_index = _index;
}

void		Contact::set_first_name(std::string _first_name)
{
	this->_first_name = _first_name;
}

void		Contact::set_last_name(std::string _last_name)
{
	this->_last_name = _last_name;
}

void		Contact::set_nickname(std::string _nickname)
{
	this->_nickname = _nickname;
}

void		Contact::set_phone_number(std::string _phone_number)
{
	this->_phone_number = _phone_number;
}

void		Contact::set_darkest_secret(std::string _darkest_secret)
{
	this->_darkest_secret = _darkest_secret;
}
