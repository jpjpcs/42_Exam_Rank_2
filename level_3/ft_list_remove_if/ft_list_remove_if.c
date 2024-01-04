/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:12:53 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/28 20:01:25 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{   
    if (!begin_list || !*begin_list)
        return ;
    
    t_list * cur = * begin_list;
    
    if (!cmp(cur->data, data_ref))
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp); 
    }
    cur = * begin_list;
    ft_list_remove_if(&cur->next, data_ref, cmp); 

}

void printlist (t_list *list)
{   
    printf("\n");
    while (list)
    {
        printf("%d\n", *(int*) list->data);
        list = list -> next;
    }  
}

int compare_data(void *data1, void *data2)
{
     int *num1 = (int *)data1;
     int *num2 = (int *)data2;

    return (*num1 == *num2) ? 0 : 1;
}

int main ()
{
    t_list *list = NULL;
    t_list *node1 = (t_list*) malloc (sizeof(t_list));
    t_list *node2 = (t_list*) malloc (sizeof(t_list));
    t_list *node3 = (t_list*) malloc (sizeof(t_list));
    t_list *node4 = (t_list*) malloc (sizeof(t_list));
    
    int data1 = 10;
    int data2 = 20;
    int data3 = 10;
    int data4 = 30;
    
    node1->data = &data1;
    node2->data = &data2;
    node3->data = &data3;
    node4->data = &data4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    list = node1;

    printf ("Before removal: ");
    printlist (list);
    
    int data_ref = 10;
    ft_list_remove_if(&list, &data_ref, compare_data);
    
    printf ("After removal: ");
    printlist (list); 
    
    //free_list(list);
    //free(node1);
    //free(node2);
    //free(node3);
    //free(node4);
     
    return (0);
}