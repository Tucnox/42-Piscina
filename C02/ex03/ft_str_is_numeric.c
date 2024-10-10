/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:35:08 by joapache          #+#    #+#             */
/*   Updated: 2024/10/08 16:14:30 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i;
    if(!str)
        return 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= '0' && str[i] <= '9')))
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
    char *test1 = "963025838";
    char *test2 = "q4b";
    char *test3 = "Adeus";
    printf("Test 1: %d",ft_str_is_numeric(test1));
    printf("Test 2: %d",ft_str_is_numeric(test2));
    printf("Test 3: %d",ft_str_is_numeric(test3));
}