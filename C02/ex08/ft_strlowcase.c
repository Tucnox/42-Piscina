/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:11:29 by joapache          #+#    #+#             */
/*   Updated: 2024/10/10 11:32:33 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] !=  '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }  
    return (str);
}
int main(void)
{
    char str[] = "I HATE C";
    ft_strupcase(str);
    write(1, str, 8);
    return 0;
}