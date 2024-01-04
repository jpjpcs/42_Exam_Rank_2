/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:27:49 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/11 16:03:56 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int main(int ac, char **av)
{   
    int len = 0;
    int i = 0;
    char str []= " ";
    
    if (ac == 2)
    {
        while (av[1][len])
            len++;
        while (len > 0)
        {
            *str = av[1][len-1];
            write (1, &str, 1);
            len --;
            i++;
        }
            
    }
    write (1, "\n", 1);
    return(0);
}
