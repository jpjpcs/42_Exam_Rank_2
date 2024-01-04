/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:40:51 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/15 23:02:02 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    int arr [256] = {0};
    
    if (ac == 3)
    {
        while (av[1][i])
        { 
            if (arr[(int)av[1][i]] == 0)
            {
                write (1, &av[1][i], 1);
                arr[(int)av[1][i]] = 1;  
            }
            i++;
        }
        
        
        
        while (av[2][j])
        { 
            if (arr[(int)av[2][j]] == 0)
            {
                write (1, &av[2][j], 1);
                arr[(int)av[2][j]] = 1;  
            }
            j++;
        }
        
    }
    write(1, "\n", 1);
    return (0);
}