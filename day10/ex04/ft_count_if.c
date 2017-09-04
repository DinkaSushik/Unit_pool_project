/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsusharn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 20:51:21 by dsusharn          #+#    #+#             */
/*   Updated: 2017/09/04 20:51:22 by dsusharn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int	index;
	int	count;

	index = (0);
	count = (0);

	while(tab[index][] != '\0')
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}
