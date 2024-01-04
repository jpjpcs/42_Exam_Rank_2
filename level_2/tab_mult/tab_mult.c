/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:45:02 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/19 19:44:17 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int ft_atoi (char *str)
{   
    int i = 0;
    int sign = 1;
    int res = 0;
    while (str[i]== 32 && (str[i] >=9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res * sign);
}

void ft_putchar (char c)
{
    write (1, &c, 1);
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

int main(int ac, char **av)
{
    int n = ft_atoi(av[1]);
    int i = 1;
    int res = 0;

    if (ac == 2)
    
    {   
        while (i <= 9)
        {   
            res = n * i;
            ft_putnbr(i);
            //ft_putchar(' ');
            //ft_putchar('x');
            //ft_putchar(' ');
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            //ft_putchar(' ');
            //ft_putchar('=');
            //ft_putchar(' ');
            ft_putnbr(res);
            ft_putchar('\n');
            i++;
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}