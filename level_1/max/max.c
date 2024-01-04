/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:04:38 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/27 18:29:55 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{   
    unsigned int i = 0;
    int max = 0;
    if (!tab[i])
        return (0);
    while (len > i)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
       i++;
    }
    return(max);
}

/* int main()
{
    int tab [3] = {300, 222, 2100};
    unsigned int n_ele = 3;
    printf("%d\n", max(tab, n_ele));
    return(0);
} */