/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:28:43 by agonzale          #+#    #+#             */
/*   Updated: 2021/02/12 20:08:16 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//si el numero es negativo, escribir N y si es positivo P
#include <unistd.h>

void ft_is_negative(long long int n)
{
	if(n < 0 )
		write(1, "N", 1);
	else if(n > 0 )
		write(1, "P", 1);
	else
		write(1, "cero", 4);
}
int main()
{
	ft_is_negative(-4432000);
}