/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:51:53 by joapache          #+#    #+#             */
/*   Updated: 2024/10/08 16:03:19 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i;
    if(!str)
        return 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;
        }
    i++;
    }
    return 1;
}
#include <stdio.h>
int main (void)
{
char *test1 = "CisAnnoying";
char *test2 = "57584";
char *test3 = "sera que fechei a porta do cacifo";
printf("Test 1: %s -> %d\n", test1,ft_str_is_alpha(test1));
printf("Test 2: %s -> %d\n", test2,ft_str_is_alpha(test2));
printf("Test 3: %s -> %d\n", test3,ft_str_is_alpha(test3));
}