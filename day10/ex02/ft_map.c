/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsusharn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:04:29 by dsusharn          #+#    #+#             */
/*   Updated: 2017/09/04 13:04:30 by dsusharn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int rNumb(int nb)
{
	return nb;
}

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	index;
	int *result;

	index = 0;
	result = (int *)malloc(sizeof(int) * length);

	while(index < length)
	{	
		result[index] = f(tab[index]);
		index++;
	}
	return (result);

}

int	main()
{
	int	tab[] = {1, 2 , 3 , 4, 5, 6, 7 , 8, 9, 10};
	ft_map(tab, 10, &rNumb);
	return (0);
}