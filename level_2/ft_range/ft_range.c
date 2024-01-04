/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 00:05:14 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/20 01:10:09 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



/* int     *ft_range(int start, int end)
{
    int i = 1 - 2 * (end < start);
    1 - 2 = - 1; 1 - 0 = 1
    int len = (end - start) * i + 1;
    
    int *array = (int*) malloc (size of(int*) * len);  
} */



#include <stdlib.h>

int	*ft_range(int start, int end)
{
    int	j = 1 - 2 * (end < start);
	int	len = (end - start) * j + 1;
	int *res = (int*) malloc(sizeof(int*) * len);
	if (!res)
		return NULL;
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = start;
			start -= 1;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = start;
			start += 1;
			i++;
		}
	}
	return (res);
}


int main ()
{
    int a = 3;
    int b = 0;
    int *test = ft_range (a, b);
    int i = 0;
    while (i <= abs (b - a))
    {
        printf("%d\n", test[i]);
        i++;
    }
    free(test);
    return(0);
}