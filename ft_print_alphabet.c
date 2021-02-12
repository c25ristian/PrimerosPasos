/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:57:57 by agonzale          #+#    #+#             */
/*   Updated: 2021/02/12 19:02:28 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Imprimir caracteres de la z a la a
#include <unistd.h>

void ft_print_reverse_alphabet()
{
	char alfa = 'z';
	while(alfa <= 'z' && alfa >= 'a')
	{
		write(1, &alfa, 1);
		alfa--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}