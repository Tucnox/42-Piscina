/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:38:51 by joapache          #+#    #+#             */
/*   Updated: 2024/10/02 18:50:23 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {1,5,3,4,2};
    int size = 5;
    int i = 0;
    ft_rev_int_tab(tab,size);
    while (i < size)
    {
        printf("%d",tab[i]);i++;
    }
    return (0);
}
*/