/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:02:10 by jode-jes          #+#    #+#             */
/*   Updated: 2023/11/07 15:27:45 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
    int i;
    i = 0;
    while(*str)
    {
        write(1, &*str, 1);
        str++;
    }
    write(1, "\n",1);
}

int main ()
{
    char *str = "Hello World!";
    //char s [] = ft_putstr(str);
    printf("String is %s \n", str);
    ft_putstr(str);
    printf("String is %s \n", str);
    return (0);
}