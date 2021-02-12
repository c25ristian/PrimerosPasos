/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resuelto.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:56:42 by agonzale          #+#    #+#             */
/*   Updated: 2021/02/12 14:21:33 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*void ft_putchar(char car);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);*/

void ft_putchar(char car)
{
	write(1, &car, 1);
}

void ft_print_alphabet(void)
{
	char car;
	car = 'a';
	while (car >= 'a' && car <= 'z')
	{
		write(1, &car, 1);
		car++;
	}
}

void ft_print_reverse_alphabet(void)
{
	char car;
	car = 'z';
	while (car <= 'z' && car >= 'a')
	{
		write(1, &car, 1);
		car--;
	}
}

void ft_print_numbers(void)
{
	int number;

	number = '0';
	while(number <= '9')
	{
		//write(1, &number, 1);
		//ft_putchar(number);
		number++;
	}
}

void ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*void ft_print_comb(void)
{
	int a1, a2, a3;

	a1 = 0;
	a2 = 1;
	a3 = 2;
	while (a1 != 7 && a2 != 8 && a3 != 9)
	{
		if (a3 != 9)
		{
			write(1, &a1&a2&a3, 3);
			a3++;
		}	
	}
}*/

int main()
{
	/*int n = 0;
	ft_print_alphabet();
	printf("\n");
	ft_print_reverse_alphabet();
	printf("\n");
	ft_print_numbers();
	ft_is_negative(n);
	ft_print_comb();*/
}

