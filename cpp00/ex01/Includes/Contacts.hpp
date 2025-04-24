/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:56:26 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/18 17:29:54 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Phonebook.hpp"

class Contact{
	public :
		Contact();
		~Contact();
			std::string	get_first_name();
			std::string	get_last_name();
			std::string	get_nickname();
			std::string	get_phone_number();
			std::string	get_darkest_secret();
		void	ft_print(void) const;
		void SetVal(std::string f, std::string l, std::string n, std::string d, std::string p);
	private :
		std::string first_name;
		std::string	last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
};

#endif
