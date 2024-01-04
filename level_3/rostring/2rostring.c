/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2rostring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:32:33 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/26 18:30:20 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i  = 0;
    int flag1 = 0;
    int flag2 = 0;

    if (ac > 1)
    {
        while (av[1][i])
        {
            while (av[1][i] == ' ')
                i++;
            if (av[1][i] && flag1 > 1)
                write (1, " ", 1);
            while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t') && !flag1)
                i++;
            flag1 = 1;
            while (av[1][i] && (av[1][i] != ' '&& av[1][i] != '\t'))
            {
                flag1 += write (1, &av[1][i], 1);
                i++;
            }
            if (flag2)
                break ;
            if (!av[1][i])
            {
                i = flag2;
                flag2++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}