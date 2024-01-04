/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:37:57 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/22 11:23:21 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int main (int ac, char **av)
{   
    int n;
    
    if (ac == 3)
    {
        
        int a = atoi (av[1]);
        int b = atoi (av [2]);
        if (a > b)
            n = b;
        else 
            n = a;
        while (n)
        {
            if ((a % n == 0) && (b % n == 0))
            {
               return (printf ("%i\n", n));
            }
            n--;    
        }   
    }
    printf ("\n"); 
}