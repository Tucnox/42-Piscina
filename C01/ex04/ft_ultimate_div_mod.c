/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:51:44 by joapache          #+#    #+#             */
/*   Updated: 2024/10/02 17:33:11 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
#include <stdio.h>
int main(void)
{
    int a=17;
    int b=3;

    printf("Antes: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a,&b);
    printf("Depois: a = %d, b = %d\n", a, b);
    return (0);
}
*/