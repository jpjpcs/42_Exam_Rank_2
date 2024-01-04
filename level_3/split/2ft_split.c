/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:31:27 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/29 13:55:16 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int space(char c)
{
    if ((c == 32) || (c >= 9 && c<= 13))
        return (1);
    return (0);
    
} 

int wordscount (char *str)
{   
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        if (str[i])
            count++;
        while (str[i] != ' ' && str[i])
            i++;
    }
    return (count);
}

char *word (char *str, int *k)
{   
    int i = 0;
    while (str[*k + i] != ' ' && str[*k + i])
        i++;
    char *word = (char*)malloc(sizeof(char*) * (i + 1));
    if (!word)
        return (NULL);
    word[i] = '\0';
    i = 0;
    while (!space(str[*k + i]) && str[*k + i])
    {
        word[i] = str[*k + i];
        i++;
    } 
    *k += i;
    return (word);
}


char    **ft_split(char *str)
{   
    int i = 0;
    int k = 0;
    char **array = (char**)malloc(sizeof(char**)* (wordscount(str) + 1));
    while (str[k])
    {
        while (space(str[k]))
            k++;
        if (str[k])
        {
            array[i++] = word(str, &k);
            //i++;
        }
    }
    array [i] = NULL;
    return (array); 
}

int main()
{
    char *str = "those words are to split";
    printf ("Unseparated string: %s \n", str);
    char **result = ft_split(str);
    int i = 0;
    //printf ("Unseparated string: %s \n", ft_split(result[i]));
    
    while (result [i] != NULL)
    {
        printf ("Word %d: %s\n", i +1, result[i]);
        i++;
    } 
    return (0);   
}