/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2fprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:21:46 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/28 19:33:31 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
    
    if (ac == 2)
    {
        int n = atoi(av[1]);
        int i = 2;
        if (n == 0)
        {
            printf ("\n");
            return (0);
        }
        if (n == 1)
        {
            printf ("1\n");
            return (0);
        }
        if (n > 1)
        {
            while (n != 1)
            {
                while (n % i != 0)
                    i++;
                if (n % i == 0)
                {
                    printf("%d", i);
                    if (n != i)
                        printf ("*");
                }
                n /= i;
                i = 2;
            }
        }   
    }
    printf("\n");
    return(0);
}