/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:52:30 by joapache          #+#    #+#             */
/*   Updated: 2024/10/03 13:26:36 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - i - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j +1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h> 

int main()
{
    int tab[] = {5,3,9,7,2};
    int size = 5;
    int i = 0;

    ft_sort_int_tab(tab, size);
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    return 0;
}
*/