/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:42:13 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/12 16:23:02 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



unsigned char swap_bits (int octet)  
{
    return(octet >> 4 | octet << 4);
}


void ft_print_bits (int octet)
{
    int i = 256;
    while (i >>= 1)
    {
        if (octet & i)
            write(1, "1", 1);
        else    
           write(1, "0", 1);
    }
    
}

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res;
    
    while (i > 0)
    {
        res =  (res*2) + (octet % 2);
        octet = octet / 2;
        i--;
    }    
    return(res);
}

int main ()
{   
    write(1, "\n", 1);
    
    ft_print_bits(38);
    
    write(1, "\n", 1);
    
    unsigned char octet = 38;
    //printf("%c", reverse_bits(octet));
    printf("\nOriginal octet: %u\n", octet);
    
    unsigned char reversed = reverse_bits(octet);
    printf("Reversed octet: %u\n\n", reversed);
    
    unsigned char swapped = swap_bits(octet);
    printf("Swapped octet: %u\n\n", swapped);
    
    return(0);
}