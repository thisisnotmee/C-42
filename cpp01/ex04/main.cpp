/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:59:32 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 16:27:05 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fstream>
#include <iostream>

// ./SED_IS_FOR_LOSERS file.txt "welcome to night city" "welcome"

int main(int ac, char **av)
{
	std::string ToFind;
	std::string ToReplace;
	std::ifstream	file(av[1]);

	if ((ac - 1) != 3)
		return (std::cout << "Erreur d'arguments" << std::endl, 0);
	ToFind = av[2];
	ToReplace = av[3];
	file.open(av[1], std::ofstream::in);

	if (file.is_open())
	{
		file >> ToFind;
	}
	file.close();
	return 0;
}