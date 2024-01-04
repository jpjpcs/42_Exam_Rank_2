/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:03:09 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/21 23:28:26 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char ** av)
{
    int i = 0;
    int j = 0;
    
    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j++])
                {
                    i++;
                    break;
                }
            }
            if (!av[2][j])
                break;
        }
        if (!av[1][i])
        {
            write (1, "1", 1); 
        }
        else 
            write (1, "0", 1); 
    }
    write (1, "\n", 1);
    
    return (0);
}