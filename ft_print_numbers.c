/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:04:35 by agonzale          #+#    #+#             */
/*   Updated: 2021/02/12 19:27:25 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//imprimir del 0 al 9
#include <unistd.h>

void ft_print_numbers()
{
	char conio = '0';
	while(conio >= '0' && conio <= '9')
	{
		write(1, &conio, 1);
		conio++;
	}
}

int main(void)
{
	ft_print_numbers();
}