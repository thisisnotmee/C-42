/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:41:47 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 20:26:43 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Phonebook.hpp"
#include "Includes/Contacts.hpp"

void	ft_add(Phonebook *phonebook, int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please enter the contact's first name:\n> ";
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter the contact's last name:\n> ";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter the contact's nickname:\n> ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter the contact's phone number:\n> ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter the contact's darkest secret:\n> ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		return ;

	(*phonebook).CreateContact(first_name, last_name, nickname, darkest_secret, phone_number, i);
}

void	ft_search(Phonebook *phonebook, int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	user_index;
	int			index;

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	int a = 1;
	while (a < i + 1)
	{
		first_name = (*phonebook).get_first_name(a - 1);
		last_name = (*phonebook).get_last_name(a - 1);
		nickname = (*phonebook).get_nickname(a - 1);
		if (first_name.length() >= 10)
		{
			first_name.resize(9);
			first_name.resize(10, '.');
		}
		if (last_name.length() >= 10)
		{
			last_name.resize(9);
			last_name.resize(10, '.');
		}
		if (nickname.length() >= 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << a << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nickname<< "|" << std::endl;
		a++;
	}
	std::cout << std::endl;
	std::cout << "Please enter the contact's index to see more details:\n> ";
	std::getline(std::cin, user_index);
	if (std::cin.eof())
		return ;
	index = atoi(user_index.c_str());
	if (index && index >=1 && index <= i)
		(*phonebook).get_contact(atoi(user_index.c_str()) - 1).ft_print();
	else
		std::cout << "Wrong index" << "\n> ";
	return ;
}

int main(void)
{
	Phonebook book;
	std::string Input;
	int i = 0;

	while (!std::cin.eof())
	{
		std::cout << "Entrez une commande (ADD / SEARCH / EXIT)" << std::endl;
		std::getline(std::cin, Input);
		if (Input == "ADD" || Input == "add")
		{
			ft_add(&book, i);
			i++;
		}
		else if (Input == "SEARCH" || Input == "search")
		{
			ft_search(&book, i);
		}
		else if (Input == "exit" || Input == "EXIT")
		{
			std::cout << "Vous quittez le Phonebook à bientot :)" << std::endl;
			return (0);
		}
		if (i == 8)
			return (0);
	}
	return 0;
}