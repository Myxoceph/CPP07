/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:47:44 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/12 18:39:47 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static void	plusTen(int &a)
{
	a += 10;
}

static void	upperCase(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string str[] = {"test", "case", "for", "42", "kocaeli"};

	std::cout << BLUE"==============================="RESET << std::endl;
	std::cout << CYAN"Before iter :"RESET << std::endl;
	std::cout << GREEN"Integer array	= " << RESET;
	for (size_t i = 0; i < 5; i++)
		std::cout << WHITE << arr[i] << " " << RESET;
	std::cout << std::endl;
	std::cout << GREEN"String array	= " << RESET;
	for (size_t i = 0; i < 5; i++)
		std::cout << WHITE << str[i] << " " << RESET;
	std::cout << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	iter(arr, 5, plusTen);
	iter(str, 5, upperCase);
	std::cout << CYAN"After iter :"RESET << std::endl;
	std::cout << GREEN"Integer array	= " << RESET;
	for (size_t i = 0; i < 5; i++)
		std::cout << WHITE << arr[i] << " " << RESET;
	std::cout << std::endl;
	std::cout << GREEN"String array	= " << RESET;
	for (size_t i = 0; i < 5; i++)
		std::cout << WHITE << str[i] << " " << RESET;
	std::cout << std::endl;
	std::cout << BLUE"==============================="RESET << std::endl;
	return (0);
}
