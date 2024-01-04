/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:53:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/11 13:02:12 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_repeat_alpha (char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 97 + 1);
    if (c >= 'A' && c <= 'Z')
        return (c - 65 + 1);
    return 1;
}


/* char ft_putchar (char c)
{
    write (1, &c, 1);
} */


int main(int ac, char **av)
{
    int i = 0;
    int k;
    if (ac == 2)
    {   
        while (av[1][i])
        {
            k = ft_repeat_alpha(av[1][i]);
            /* k = 1;
            if (av[1][i]>= 'a' && av[1][i]<= 'z')
            {
                k = av[1][i] - 96;
            }
            else if (av[1][i]>= 'A' && av[1][i]<= 'Z')
            {
                k = av[1][i] - 64;
            } */
            while (k--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return(0);
}

