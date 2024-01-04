/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:28:18 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/19 20:07:56 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int ascii (char c)
{
	if(c >= 'a')
		return ('a' -10);
	if	(c >= 'A')
		return ('A' -10);
	if (c >= '0' && c <= '9')
		return ('0');
	return (0);
}
int ft_isdigit (char c, int base)
{
	char *base_l = "0123456789abcdef";
	char *base_u = "0123456789ABCDEF";
	
	while(base--)	
	{
		if(c == base_l[base] || c == base_u[base])
			return (1);
	}
	return (0);
}

int	ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			sign *= -1;
	while (str[i] && ft_isdigit (*str, base))
	{
		res = res * base + str[i] - ascii (str[i]);
		i++;
	}
	return (res * sign);
}

int main()
{	
	char str[] = "101";
	int str_base = 2;
	int base = ft_atoi_base(str, str_base);
	printf("\n%d\n\n", base);
	
		return (0);
}	