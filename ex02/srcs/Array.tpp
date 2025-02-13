/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:50:55 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 13:46:32 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	arr = new T[0];
	arr_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	arr_size = n;
	for (unsigned int i = 0; i < arr_size; i++)
	{
		arr[i] = T();
	}
}

template <typename T>
Array<T>::Array(Array const &other)
{
	arr = new T[other.arr_size];
	arr_size = other.arr_size;
	for (unsigned int i = 0; i < arr_size; i++)
	{
		arr[i] = other.arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this == &other)
	{
		return (*this);
	}
	delete[] arr;
	arr = new T[other.arr_size];
	arr_size = other.arr_size;
	for (unsigned int i = 0; i < arr_size; i++)
	{
		arr[i] = other.arr[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= arr_size)
	{
		throw OutOfBoundsException();
	}
	return (arr[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (arr_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index is out of bounds");
}
