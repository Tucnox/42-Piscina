/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapache <joapache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:00:50 by joapache          #+#    #+#             */
/*   Updated: 2024/10/09 17:38:17 by joapache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] !=  '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }  
    return (str);
}
int main(void)
{
    char str[] = "doi-me a cabeca";
    ft_strupcase(str);
    write(1, str, 15);
    return 0;
}