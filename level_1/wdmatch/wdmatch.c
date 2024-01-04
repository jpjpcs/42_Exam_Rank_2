/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:46:57 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/16 01:05:40 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    i += 1;
                    break;
                }
                j++;
            }
            if (!argv[2][j]) // Se chegarmos ao final de argv[2], interrompemos
                break;
        }
        if (!argv[1][i])
            ft_putstr(argv[1]);
    }
    write(1, "\n", 1);

    return 0;
}


/* #include <unistd.h>

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
} */