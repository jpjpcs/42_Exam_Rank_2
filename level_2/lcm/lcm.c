/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:03:22 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/27 18:50:51 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n; 
    
    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        n = a;
    else 
        n = b;
    while (1)
    {
        if (n % a == 0  && n % b == 0)
            return (n);
        n++;
    }
    return (0);
}

/* int	main(int argc, char **argv)
{
	if (argc == 3)
	{
 		int a = atoi(argv[1]);
 		int b = atoi(argv[2]);
 		unsigned int test = lcm(a, b);
 		printf("%u\n", test);
 	}
 	return (0);
} */

/* int main()
{
    int a = 10;
    int b = 20;
    int min = lcm (a, b);
    printf ("%d\n", min);
}  */