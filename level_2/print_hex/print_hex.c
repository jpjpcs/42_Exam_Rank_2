/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:21:30 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/19 23:45:05 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi (const char *str)
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
        else
            return (0);
        res = res * 10 + c;
        i++;
    }
    return (res * sign);
}

void ft_putnbr (int n)
{   
    long int nb = n;
    
    if (nb < 0)
    {
        write (1, "-", 1);
        nb = - nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb/10);
    }
    nb = nb % 10 + 48;
    write (1, &nb, 1);
    
}


void put_hex (int n)
{
    char base [] = "0123456789abcdef";
    int hex;
    int final;
    if (n >= 16)
    {   
        put_hex(n/16); 
    }  
    hex = n % 16;
    final = base[hex];
    write (1, &final, 1);
  
} 

int main(int ac, char **av)
{       
    int n;
    
    if (ac == 2)
    {   
        n = ft_atoi (av[1]);
        put_hex (n);
    }
    write (1, "\n", 1);
    return (0);
}