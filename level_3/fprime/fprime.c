/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:01:51 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/27 15:50:53 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void f_prime (int n)
{   
    if (n == 1)
    {
        printf ("1");
        return ;
    }
    
    int i = 2;
    while (n > 1)
    {
        while (n % i != 0)
        {
            i++;
        }
        if (n % i == 0)
        {
            printf ("%d", i);
            if (n != i)
                printf ("*");
        }
        n /= i;
    } 
}

int main(int ac, char **av)
{
    if (ac == 2)
    {   
        int n = atoi(av[1]);
        f_prime(n);
    }
    printf ("\n");
    return (0);
}