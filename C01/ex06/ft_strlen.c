/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:22:25 by joapache          #+#    #+#             */
/*   Updated: 2024/10/02 18:28:56 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght ++;
	}
	return (lenght);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "I hate C";
    char str2[] = "In Portugal People only talk about Soccer";

    printf("Numero de caracteres do primeira string:%d\n", ft_strlen(str1));
    printf("Numero de caracteres da segunda string:%d\n", ft_strlen(str2));
}
*/