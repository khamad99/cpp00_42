/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:31:40 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/09 12:22:24 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
	int				_index;
public:
	std::string			get_first_name() const;
	std::string			get_last_name() const;
	std::string			get_nickname() const;
	std::string			get_phone_number() const;
	std::string			get_darkest_secret() const;
	int					get_index() const;
	void				set_index(int _index);
	void				set_first_name(std::string _first_name);
	void				set_last_name(std::string _last_name);
	void				set_nickname(std::string _nickname);
	void				set_phone_number(std::string _phone_number);
	void				set_darkest_secret(std::string _darkest_secret);
	Contact();
	~Contact();
};

#endif