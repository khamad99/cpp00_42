/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:25:21 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/13 00:33:27 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>

std::string	Phonebook::_display_format(std::string str) const
{
	std::string		result;
	int				len;

	len = str.length();
	if (len > 10)
	{
		result = str.substr(0, 9);
		result += ".";
	}
	else
	{
		result = str;
		while (len < 10)
		{
			result = " " + result;
			len++;
		}
	}
	return (result);
}

void	Phonebook::_display_contact() const
{
	int	index;
	std::cout << "Enter index: ";
	std::cin >> index;
	std::cin.ignore();
	if (index < 1 || index > 8)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "first_name: " << this->_contacts[index - 1].get_first_name() << std::endl;
		std::cout << "last_name: " << this->_contacts[index - 1].get_last_name() << std::endl;
		std::cout << "nickname: " << this->_contacts[index - 1].get_nickname() << std::endl;
		std::cout << "phone_number: " << this->_contacts[index - 1].get_phone_number() << std::endl;
		std::cout << "darkest_secret: " << this->_contacts[index - 1].get_darkest_secret() << std::endl;
	}
}

void	Phonebook::search_contact() const
{
	std::cout << "----------|----------|----------|----------" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 1; i < 9; i++)
	{
		std::cout << "----------|----------|----------|----------" << std::endl;
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Phonebook::_display_format(this->_contacts[i - 1].get_first_name()) << "|";
		std::cout << std::setw(10) << Phonebook::_display_format(this->_contacts[i - 1].get_last_name()) << "|";
		std::cout << std::setw(10) << Phonebook::_display_format(this->_contacts[i - 1].get_nickname()) << std::endl;
	}
	std::cout << "----------|----------|----------|----------" << std::endl;
	Phonebook::_display_contact();
}

void	Phonebook::add_contact()
{
	int i = -1;

	std::string	var[5];
	std::string prompt[5] = {"Enter first name: ", "Enter last name: ", "Enter nickname: ", "Enter phone number: ", "Enter darkest secret: "};

	this->_index > 7 ? this->_index = 0 : 0;
	while (++i < 5)
	{
		std::cout << prompt[i];
		if (!std::getline(std::cin, var[i]) )
		{
			std::cout << std::endl;
			break ;
		}
		if (var[i].empty())
		{
			i--;
			continue ;
		}
	}

	if (i == 5)
	{
		this->_contacts[this->_index % 8].set_first_name(var[0]);
		this->_contacts[this->_index % 8].set_last_name(var[1]);
		this->_contacts[this->_index % 8].set_nickname(var[2]);
		this->_contacts[this->_index % 8].set_phone_number(var[3]);
		this->_contacts[this->_index % 8].set_darkest_secret(var[4]);
		this->_contacts[this->_index % 8].set_index(this->_index);
		this->_index++;
	}

}

Phonebook::Phonebook()
{
	this->_index = 0;
}

Phonebook::~Phonebook()
{
}
