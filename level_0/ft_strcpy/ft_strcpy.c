/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:31:56 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/15 23:43:45 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{   
    int i = 0;
    
    /* if (src[i] == '\0')
        return (0); */

    while (src[i]!= '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/* char    *ft_strcpy(char *dest, char *src)
{
	char *temp = dest;
	while(*src)
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = *src;
	return (temp);
} */

int main()
{   
    char src[] = "Hello People!";
    char dest[] = "World";
    printf ("Dest string is %s \n", ft_strcpy(dest, src));
    return (0);
}