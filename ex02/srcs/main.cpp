/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:47:44 by abakirca          #+#    #+#             */
/*   Updated: 2025/03/10 15:31:19 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>			array1;
	Array<int>			array2(5);
	Array<std::string>	array3(3);
	Array<float>		array4(2);
	std::cout << BLUE"==================================================="RESET << std::endl << std::endl;
	std::cout << YELLOW"Initial values of the arrays"RESET << std::endl << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 1 <int> size	 : "WHITE << array1.size() << RESET << std::endl;
	std::cout << CYAN"Array 1 <int> content	 : "WHITE;
	for (unsigned int i = 0; i < array1.size(); i++)
		std::cout << array1[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 2 <int> size	 : "WHITE << array2.size() << RESET << std::endl;
	std::cout << CYAN"Array 2 <int> content	 : "WHITE;
	for (unsigned int i = 0; i < array2.size(); i++)
		std::cout << array2[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 3 <string> size	 : "WHITE << array3.size() << RESET << std::endl;
	std::cout << CYAN"Array 3 <string> content : "WHITE;
	for (unsigned int i = 0; i < array3.size(); i++)
		std::cout << array3[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 4 <float> size	 : "WHITE << array4.size() << RESET << std::endl;
	std::cout << CYAN"Array 4 <float> content	 : "WHITE;
	for (unsigned int i = 0; i < array4.size(); i++)
		std::cout << array4[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl << std::endl;
	std::cout << YELLOW"Assigning values to arrays"RESET << std::endl << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	for (unsigned int i = 0; i < array1.size(); i++)
		array1[i] = i + 10;
	for (unsigned int i = 0; i < array2.size(); i++)
		array2[i] = i + 40;
	array3[0] = "abakirca";
	array3[1] = "42";
	array3[2] = "Kocaeli";
	array4[0] = 3.14;
	array4[1] = 31.69;
	std::cout << CYAN"Array 1 <int> size	 : "WHITE << array1.size() << RESET << std::endl;
	std::cout << CYAN"Array 1 <int> content	 : "WHITE;
	for (unsigned int i = 0; i < array1.size(); i++)
		std::cout << array1[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 2 <int> size	 : "WHITE << array2.size() << RESET << std::endl;
	std::cout << CYAN"Array 2 <int> content	 : "WHITE;
	for (unsigned int i = 0; i < array2.size(); i++)
		std::cout << array2[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 3 <string> size	 : "WHITE << array3.size() << RESET << std::endl;
	std::cout << CYAN"Array 3 <string> content : "WHITE;
	for (unsigned int i = 0; i < array3.size(); i++)
		std::cout << array3[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Array 4 <float> size	 : "WHITE << array4.size() << RESET << std::endl;
	std::cout << CYAN"Array 4 <float> content	 : "WHITE;
	for (unsigned int i = 0; i < array4.size(); i++)
		std::cout << array4[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl << std::endl;
	std::cout << YELLOW"Copy constructor and assignment operator"RESET << std::endl << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	Array<std::string>	copy(array3);
	Array<float>		assign;
	assign = array4;
	std::cout << CYAN"Copy <string> size	 : "WHITE << copy.size() << RESET << std::endl;
	std::cout << CYAN"Copy <string> content	 : "WHITE;
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl;
	std::cout << CYAN"Assign <float> size	 : "WHITE << assign.size() << RESET << std::endl;
	std::cout << CYAN"Assign <float> content	 : "WHITE;
	for (unsigned int i = 0; i < assign.size(); i++)
		std::cout << assign[i] << " ";
	std::cout << RESET << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl << std::endl;
	std::cout << YELLOW"Exception handling"RESET << std::endl << std::endl;
	std::cout << BLUE"==================================================="RESET << std::endl << std::endl;
	try
	{
		std::cout << CYAN"Trying to access index 3 of array 1 <int> : "WHITE << array1[3] << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return (0);
}
