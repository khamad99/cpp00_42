/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:49:49 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/06 12:24:37 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	l;
	int	i;
	int	j;

	i = 0;
	l = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
	else
	{
		while(argv[++i])
		{
			j = 0;
			l = strlen(argv[i]);
			while (l-- && argv[i][j])
				std::cout << (char) toupper(argv[i][j++]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
