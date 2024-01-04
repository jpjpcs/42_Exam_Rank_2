/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:56:22 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/27 20:14:24 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int temp = 0;
    unsigned int i = 0;
    
    while ((size - 1) > i)
    {
        if (tab[i] > tab[i + 1])
        {
            temp =  tab [i + 1];
            tab [i + 1] = tab [i];
            tab [i] = temp;
            i = 0;
        }
        else
            i++;
    }
}

void printtab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    while (size > i)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}

int main()
{
    int tab [3] = {8, 5, 2};
    unsigned int size  = 3;
    printf ("Old tab: \n");
    printtab(tab, size);
    sort_int_tab(tab, size);
    printf ("New tab: \n");
    printtab(tab, size);
    return(0);
}