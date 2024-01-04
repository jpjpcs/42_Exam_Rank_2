/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:56:26 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/28 00:49:58 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int len_nbr (int n)
{   
    int len = !n;
 /*    if (n == 0)
        len = !n;
    else if (n < 0)
        n = -n; */
    while (n)
    {
        len ++;
        n = n / 10;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    int sign = nbr < 0;
    int len = len_nbr (nbr) + sign;
    char *array = (char*)malloc(sizeof(char*) * (len + 1));
    if (!array)
        return (NULL);
    //len = len--;
    array [len] = '\0';
    if (sign)
    {   
        array[0] = '-';
        array[--len] = -(nbr % 10) + 48;
        nbr = - (nbr / 10);
    }
    while (len-- -sign)
    {
        array[len] = (nbr % 10) + 48;
        nbr = nbr / 10;
    } 
    return (array);
}

int main()
{
    int n = -123;
    printf("string char: %s\n", ft_itoa (n));
    return(0);
}