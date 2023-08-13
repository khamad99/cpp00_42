/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:49:49 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/08 14:15:05 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(int argc, char **argv)
{
	int	i;
	std::string str;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
	else
	{
		while(argv[++i])
		{
			str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
