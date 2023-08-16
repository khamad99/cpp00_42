/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:07:21 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/16 11:10:32 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	Phonebook	phonebook;
	std::string	command;

	(void)argv;
	if (argc != 1)
		return (std::cout << "Only ./phonebook is allowed" << std::endl, 1);

	while (command != "EXIT")
	{
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, command) )
		{
			std::cout << std::endl;
			break ;
		}
		if (command.empty())
			continue ;
		else if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command != "EXIT")
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
