/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:45:57 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/21 23:58:26 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include  <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    
    while (src[len])
    {
        len++;
    }
    char *new_str = (char*) malloc(sizeof(char*) * (len + 1));
    if (!new_str)
        return (NULL);
        
    int i = 0;
    
    while (src[i])
    {
        new_str[i] = src[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int main()
{
    char *str = "Hello";
    printf("old string: %s \n", str);
    char *result = ft_strdup(str);
    printf("new string: %s \n", result);
}