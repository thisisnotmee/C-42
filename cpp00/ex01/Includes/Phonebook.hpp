/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:55:18 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/18 17:27:29 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iomanip>
#include <cstdlib>
#include <iostream>


class Phonebook{
	public :
		Phonebook();
		~Phonebook();
			std::string	get_first_name(int i);
			std::string	get_last_name(int i);
			std::string	get_nickname(int i);
			std::string	get_phone_number(int i);
			std::string	get_darkest_secret(int i);
		Contact get_contact(int i);
		void CreateContact(std::string first, std::string last, std::string nick, std::string secret, std::string phone, int i);
	private :
		Contact phonebook[8];		
};

#endif