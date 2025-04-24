/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:44:37 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 19:53:34 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl	msg;

	msg.complain("debug");
	msg.complain("info");
	msg.complain("warning");
	msg.complain("error");
	msg.complain("salut");
	return 0;
}