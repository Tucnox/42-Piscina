/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:20:30 by joapache          #+#    #+#             */
/*   Updated: 2024/10/09 14:42:48 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_printable(char *str)
{
    int i;
   
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
#include <stdio.h>

int main(void)
{
char *test1 = "swatch#";
char *test2 = "*7^&()";
char *test3 = "sss ppp";
printf("Teste 1: %d",ft_str_is_printable(test1));
printf("Teste 2: %d",ft_str_is_printable(test2));
printf("Teste 3: %d",ft_str_is_printable(test3));
}