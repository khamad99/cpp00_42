/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:21:38 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/16 09:35:24 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <limits>
class Phonebook
{
private:
	Contact		_contacts[8];
	int			_index;
	void		_display_contact() const;
	std::string	_display_format(std::string str) const;
	bool 		_containsOnlySpaces(const std::string& str) const;
public:
	void		add_contact();
	void		search_contact() const;
	Phonebook();
	~Phonebook();
};


#endif