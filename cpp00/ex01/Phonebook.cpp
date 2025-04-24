/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:39:27 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/18 16:24:53 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Phonebook.hpp"
#include "Includes/Contacts.hpp"

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{

}

std::string	Phonebook::get_first_name(int i)
{
	return (phonebook[i].get_first_name());
}

std::string	Phonebook::get_last_name(int i)
{
	return (phonebook[i].get_last_name());
}

std::string	Phonebook::get_nickname(int i)
{
	return (phonebook[i].get_nickname());
}

std::string	Phonebook::get_phone_number(int i)
{
	return (phonebook[i].get_phone_number());
}

std::string	Phonebook::get_darkest_secret(int i)
{
	return (phonebook[i].get_darkest_secret());
}


void Phonebook::CreateContact(std::string first, std::string last, std::string nick, std::string secret, std::string phone, int i)
{
	phonebook[i].SetVal(first, last, nick, secret, phone);
}

