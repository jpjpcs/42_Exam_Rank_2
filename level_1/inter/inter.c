/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:02:48 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/15 22:31:39 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int j;
    int arr [256] = {0};
    if (ac == 3)
    {
        while (av[1][i])
        { 
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (arr[(int)av[1][i]] == 0)
                    {
                        write (1, &av[1][i], 1);
                        arr[(int)av[1][i]] = 1;  
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}