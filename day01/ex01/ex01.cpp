/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhufflep <mhufflep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:51:57 by mhufflep          #+#    #+#             */
/*   Updated: 2021/01/13 07:45:05 by mhufflep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

void	memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;

	delete panther;
}

// int main(void)
// {
// 	memoryLeak();
// 	return (0);
// }