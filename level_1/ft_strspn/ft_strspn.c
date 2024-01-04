/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:24:54 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/28 23:14:42 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
   
    while (s[i]) 
    {
        size_t j = 0;
        while (accept[j]) 
        {
            if (s[i] == accept[j])
            {
                // Match found, move to the next character in the input string
                i++;
                break;
            }
            j++;
        }
        // If no match is found, stop and return the current count
        if (!accept[j]) 
            return i;
    }
    return i;
}

int main(void)
{
     const char *s = "baca";
     const char *accept = "ab";
     size_t result = ft_strspn(s, accept);
     printf("Input string: %s\n", s);
     printf("Accepted characters: %s\n", accept);
     printf("Length of initial segment: %zu\n", result);
     printf("strspn: %lu\n", strspn(s, accept));
     //printf("strCspn: %lu\n", strcspn(s, accept));
     return 0;
}