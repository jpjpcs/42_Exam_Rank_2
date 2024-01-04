/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_Filipe.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:34:40 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/19 20:49:51 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

int ft_atoi_base (const char *str, int str_base)
{   
    int i = 0;
    int sign = 1;
    int res = 0;
    int c = 0;
    while (str[i]== 32 && (str[i] >=9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            c = str[i] - 48;
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            return (0);
        res = res * str_base + c;
        i++;
    }
    return (res * sign);
}

int main()
{
    char str []= "1A";
    int base = 16;
    int n = ft_atoi_base(str, base);
    printf ("%d \n", n);
    
}