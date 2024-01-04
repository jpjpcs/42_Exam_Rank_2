/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:57:27 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/27 19:05:00 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *cur = lst;
    int tempdata = 0;
    
    while (lst->next)
    {
        if (!cmp(lst->data, lst->next->data))
        {
            tempdata = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tempdata;
            lst = cur;
        }
        else
            lst = lst->next;
    }
    lst = cur;
    return(lst);
}

/* int ascending(int a, int b)
{
	return (a <= b);
}

void printlist (t_list *list)
{   
    printf ("\n");
    while (list)
    {
        printf ("%d\n", list->data);
        list = list->next;
    }
}
int main()
{
    t_list *node1 = (t_list*)malloc(sizeof(t_list));
    t_list *node2 = (t_list*)malloc(sizeof(t_list));
    t_list *node3 = (t_list*)malloc(sizeof(t_list));
    t_list *node4 = (t_list*)malloc(sizeof(t_list));

    int data1 = 30; 
    int data2 = 20;
    int data3 = 10;
    int data4 = 40;

    node1->data = *(int*) &data1;
    node2->data = *(int*)&data2;
    node3->data = *(int*)&data3;
    node4->data = *(int*)&data4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    printf("before sort: ");
    printlist (node1);
    sort_list (node1, ascending);
    printf("after sort: ");
    printlist (node1);

    free(node1);
    free(node2);
    free(node3);
    free(node4);  
} */