/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:29:23 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/13 00:12:49 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    char temp;
    int len = 0;
    int i = 0;
    
    while (str[len])
        len++;
    while (len/2 > i)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        i++;
    }
    return (str);
}

int main()
{
    char str[]="Hello";
    printf("%s\n", ft_strrev(str));
    return(0);
}