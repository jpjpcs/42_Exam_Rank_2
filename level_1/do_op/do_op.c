/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:02:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/12 19:48:18 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int calc (int n1, int n2, char c)
{
    if (c == '+')
        return (n1 + n2);
    if (c == '-')
        return (n1 - n2);
    if (c == '*')
        return (n1 * n2);
    if (c == '/')
        return (n1 / n2);
    if (c == '%')
        return (n1 % n2);
    return (0);
}

int main (int ac, char **av)
{   
    if (ac == 4)
    {
        int n1 = atoi (av[1]);
        int n2 = atoi (av[3]);
        //int result = calc(n1, n2, av[2][0]);
        //printf("%d ", result);
        printf("%d", calc(n1, n2, av[2][0]));
        //write (1, &result, 1);
    }
    //write (1, "\n", 1);
    printf ("\n");
    return (0);    
}