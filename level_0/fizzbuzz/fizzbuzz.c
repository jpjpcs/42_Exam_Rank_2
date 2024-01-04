/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:37:06 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/05 12:57:39 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    n = n % 10 + '0';
    write(1, &n, 1);
}

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */

/* void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchard('-');
		lnb = -lnb;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putchard(lnb % 10 + 48);
	}
	else
		ft_putchard(lnb + 48);
} */

/*int main()
{
    ft_putnbr(1500);
    return (0);
}*/


/*void print_number(int n)
{
    if (n >= 10)
    {
        print_number(n/10);
        print_number(n%10);
    }
    else
    {
        n = n + 48;
        write(1, &n, 1);
    }

} */

/* void	ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
} */

/* int	main(void)
{
	int n = -2147483648;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
} */

int main()
{
    int n; 
    n = 127; 
    while (n > 126 && n <= 127)
    {
        if (n%3 == 0 && n%5 == 0)
        {
            write (1, "fizzbuzz", 8);
        }
        else if (n%3 == 0)
        {
            write (1, "fizz", 4);
        }
        else if (n%5 == 0)
        {
            write (1, "buzz", 4);
        }
        else
        {
            ft_putnbr(n);
        }
        write(1, "\n", 1);
        n++;
    } 
    return (0);
}