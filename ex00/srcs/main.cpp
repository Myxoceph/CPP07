/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:47:44 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/12 18:24:28 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << BLUE"==============================="RESET << std::endl;
	std::cout << CYAN"The values are :"RESET << std::endl;
	std::cout << GREEN"a = "WHITE << a << RESET << std::endl;
	std::cout << GREEN"b = "WHITE << b << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	swap(a, b);
	std::cout << CYAN"After swap :"RESET << std::endl;
	std::cout << GREEN"a = "WHITE << a << RESET << std::endl;
	std::cout << GREEN"b = "WHITE << b << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	std::cout << CYAN"Min and Max values are :"RESET << std::endl;
	std::cout << GREEN"Min( a, b ) = "WHITE << ::min( a, b ) << RESET << std::endl;
	std::cout << GREEN"Max( a, b ) = "WHITE << ::max( a, b ) << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << CYAN"The values are :"RESET << std::endl;
	std::cout << GREEN"c = "WHITE << c << RESET << std::endl;
	std::cout << GREEN"d = "WHITE << d << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	swap(c, d);
	std::cout << CYAN"After swap :"RESET << std::endl;
	std::cout << GREEN"c = "WHITE << c << RESET << std::endl;
	std::cout << GREEN"d = "WHITE << d << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	std::cout << CYAN"Min and Max values are :"RESET << std::endl;
	std::cout << GREEN"Min( c, d ) = "WHITE << ::min( c, d ) << RESET << std::endl;
	std::cout << GREEN"Max( c, d ) = "WHITE << ::max( c, d ) << RESET << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	return (0);
}
