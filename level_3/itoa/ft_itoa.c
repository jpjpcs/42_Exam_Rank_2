/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:34:02 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/28 00:53:31 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	nbrlen(int n)
{
    int count = !n; 
    
    while (n)
    {
        count++;
        n = n / 10;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    int sign = nbr < 0;
    int len = nbrlen (nbr) + sign;
    char *str = (char*)malloc((sizeof (char)) * (len + 1));
    if (!str)
        return (NULL);
    
    str [len] = '\0';
    if (sign)
    {
        str[0] = '-';
        str[--len] = - (nbr % 10) + '0';
        nbr = - (nbr / 10);
    }
    while (len-- - sign)
    {
        str[len] = (nbr % 10) + 48;
        nbr = nbr / 10; 
    }
    return (str);
}

int main()
{   
    int n = -123;
    //char *str = ft_itoa(n);
    printf("\n%s\n\n", ft_itoa(n));
    return (0);
}