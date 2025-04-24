/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:21:28 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/18 17:30:05 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Includes/Phonebook.hpp"
#include "Includes/Contacts.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

Contact Phonebook::get_contact(int i)
{
	return (phonebook[i]);
}
std::string	Contact::get_first_name()
{
	return (first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}

void Contact::ft_print(void) const
{
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}

void	Contact::SetVal(std::string f, std::string l, std::string n, std::string d, std::string p)
{
	first_name = f;
	last_name = l;
	nickname = n;
	darkest_secret = d;
	phone_number = p;
}