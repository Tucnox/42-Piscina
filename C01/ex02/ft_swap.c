/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:52:14 by joapache          #+#    #+#             */
/*   Updated: 2024/10/02 16:04:09 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	time;

	time = *a;
	*a = *b;
	*b = time;
}
/*
#include <stdio.h>
int main()
{
    int x = 5;
    int y =10;
    printf("Antes: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);
    return (0);
}
*/