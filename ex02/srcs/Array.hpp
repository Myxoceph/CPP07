/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:22:23 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 13:50:05 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

template <typename T>
class Array
{
	private:
			T *arr;
			unsigned int arr_size;
	public:
			Array();
			Array(unsigned int n);
			Array(Array const &other);
			~Array();
			Array &operator=(Array const &other);
			T &operator[](unsigned int size);
			unsigned int size() const;

	class OutOfBoundsException : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};

#include "Array.tpp"

#endif
