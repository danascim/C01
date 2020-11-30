/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:27:55 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/30 16:33:43 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	aux(int *str, int i)
{
	int aux;

	aux = str[i];
	str[i] = str[i + 1];
	str[i + 1] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while (count != 0)
	{
		count = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				aux(tab, i);
				i++;
				count++;
			}
			else
			{
				i++;
			}
		}
		i = 0;
	}
}
