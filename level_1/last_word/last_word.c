/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:36:06 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/22 00:15:10 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{   
    int len = 0;
    
    if (ac == 2)
    {
        while (av[1][len])
            len++;
        len--;
        while (av[1][len] == ' ' || av[1][len] == '\t') 
           len--;
        while (av[1][len] != ' ' && av[1][len] != '\t')
            len--;
        len++;
        while (av[1][len] && av[1][len] != ' ' && av[1][len] != '\t' ) 
        {   
            write (1, &(av[1][len]), 1);
            len ++;
        }
    }
    write (1, "\n", 1);
    return(0);
}
