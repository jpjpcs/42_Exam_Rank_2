/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:24:54 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/28 22:52:08 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>


size_t	ft_strcspn(const char *s, const char *accept)
{
    int i = 0;
    
    while (s[i])
    {
        int j = 0;
        while (accept[j])
        {
            if (s[i] != accept[j])
                j++;
            else
                return (i);
        }
        i++;
    }
    return(i);
}  

int main(void)
{
     const char *s = "Hello";
     const char *accept = "solo";
     size_t result = ft_strcspn(s, accept);
     printf("Input string: %s\n", s);
     printf("Accepted characters: %s\n", accept);
     printf("Length of initial segment: %zu\n", result);
     //printf("strspn: %lu\n", strspn(s, accept));
     printf("strCspn: %lu\n", strcspn(s, accept));
     return 0;
}