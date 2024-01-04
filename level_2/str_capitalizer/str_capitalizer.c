/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 01:29:50 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/29 01:29:52 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		int j;
		char c;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] != ' ' && (argv[i][j-1] == ' ' || j == 0))
				{
					c = ft_toupper(argv[i][j]);
					write(1, &c, 1);
				}
				else
				{
					c = ft_tolower(argv[i][j]);
					write(1, &c, 1);
				}
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}