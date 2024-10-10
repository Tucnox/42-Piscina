/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:13:58 by joapache          #+#    #+#             */
/*   Updated: 2024/10/02 17:43:49 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int main(void)
{
    int a = 18;
    int b = 6;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
    printf("Divisao: %d / %d = %d\n", a, b, div);
    printf("Resto: %d %% %d = %d\n", a, b, mod);
    return (0);
}
*/