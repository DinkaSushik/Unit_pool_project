/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsusharn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 12:30:48 by dsusharn          #+#    #+#             */
/*   Updated: 2017/09/04 12:34:27 by dsusharn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb != -2147483648)
		{
			ft_putnbr(-nb);
		}
		else
		{
			nb++;
			ft_putnbr(-nb / 10);
			ft_putchar('8');
		}
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int	index;
	index = 0;

	while(index < length)
	{	f(tab[index]);
		index++;
	}
}


int	main()
{
	int	tab[] = {1, 2 , 3 , 4, 5, 6, 7 , 8, 9, 10};
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}