/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsusharn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 21:24:12 by dsusharn          #+#    #+#             */
/*   Updated: 2017/09/04 21:24:12 by dsusharn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_sort(int tab[], int length)
{
	int	index;
	int	res;

	index = 0;
	res = 0;
	while (index < length && res>=0)
	{
		res = tab[index+1]-tab[index];
		index++;
		if (res > 0)
			res = 0;
	}
	return (res);
}

int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		if(is_sort(tab[index], 5))
		return (0);
		index++;
	}
		return (1);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_is_sort(tab, 5, &is_sort);
	return (0);
}
