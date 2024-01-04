/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:44:51 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/27 12:24:53 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{   
    if (!begin_list)
        return;
    while(begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

void printlist (void *list)
{   
    printf("list is: %d\n", *(int*) list);
}

 int main()
{
    t_list *node1 = (t_list*)malloc(sizeof(t_list));
    t_list *node2 = (t_list*)malloc(sizeof(t_list));
    t_list *node3 = (t_list*)malloc(sizeof(t_list));
    t_list *node4 = (t_list*)malloc(sizeof(t_list));

    int data1 = 10; 
    int data2 = 20;
    int data3 = 30;
    int data4 = 40;

    node1->data = &data1;
    node2->data = &data2;
    node3->data = &data3;
    node4->data = &data4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    ft_list_foreach(node1, printlist);

    free(node1);
    free(node2);
    free(node3);
    free(node4);
    
    
}