/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:24:11 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/28 15:10:22 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int 	wordscount(char *str)
{
	int	count = 0;
	while(*str)
	{
		while(space(*str))
			str++;
		if(*str)
			count++;
		while(!space(*str) && *str)
			str++;
	}
	return (count);
}

char	*word(char *str, int *k)
{
	int	i = 0;
	while (!space(str[*k + i]) && str[*k + i])
		i++;
	char *word = (char *)malloc(sizeof(char *) *(i + 1));
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
	char **array = (char **)malloc(sizeof(char **) * (wordscount(str) + 1));
	int	k = 0, i = 0;
	while(str[k])
	{
		while(space(str[k]))
			k++;
		if (str[k])
			array[i++] = word(str, &k);
	}
	array[i] = NULL;
	return (array);
}



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char **result = ft_split(argv[1]);

        // Print the split words
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            i++;
        }

        // Free the allocated memory
        int j = 0;
        while (result[j] != NULL)
        {
            free(result[j]);
            j++;
        }
        free(result);
    }
	else
		printf("não foi separado\n");
    return (0);
}
