/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:28:55 by joapache          #+#    #+#             */
/*   Updated: 2024/10/09 10:28:58 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    if(!str)
        return 1;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z')))
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
    char *test1 = "PISCINE";
    char *test2 = "Joaquim";
    char *test3 = "J42";
    printf("Teste 1:%d",ft_str_is_uppercase(test1));
    printf("Teste 2:%d",ft_str_is_uppercase(test2));
    printf("Teste 3:%d",ft_str_is_uppercase(test3));
}