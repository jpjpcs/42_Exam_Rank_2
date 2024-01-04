/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:16:16 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/04 15:09:00 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void add_back (t_list **lst, t_list *node)
{   
    t_list *temp;
    
    if (!lst || !node)
        return ;
    if (!*lst)
        *lst = node;
    else
    {   
        temp = *lst;
        while(temp->next) 
        {
            temp = temp->next;
        }     
        temp->next = node;
    }
}

int lst_size (t_list *list)
{
    int count;
    count = 0;
    
    if (!list)
        return (0);
    while (list)
    {
        count++;
        list = list->next;
    }
    return (count);
}

/* int lst_size(t_list *list)
{
    int count = 0;

    // Use a temporary pointer to iterate through the list
    t_list *current = list;
    if (!list)
        return (0);
    while (current)
    {
        count++;
        current = current->next;
    }

    return count;
} */

void lstadd_front (t_list **lst, t_list *node)
{    
    if(!lst || !node)
        return ;
    if(!*lst)
        *lst = node;
    else
    {   
        node->next = *lst;
        *lst = node;
    } 
}

t_list *ft_lstnew (void *content)
{
    t_list *new_node;
    
    new_node = (t_list*)malloc(sizeof(t_list));
    new_node->content = content;
    new_node->next = NULL;
    return(new_node);
}

int main()

{
    t_list *lst_pointer;
    lst_pointer = NULL;
    
    t_list *node_1;
    node_1 = ft_lstnew("World");
    
    t_list *node_2;
    //int n = 42;
    node_2 = ft_lstnew("Hello");
    
    int nbr = 42;
    //int *ptr = &nbr;
    t_list *node_3;
    node_3 = ft_lstnew(NULL); // Initialize with NULL content
    node_3->content = malloc(sizeof(int)); // Allocate memory for int
    *(int *)node_3->content = nbr;
    node_3->next = NULL;

    
   /*  t_list *node_3;
    node_3 = (t_list*)malloc(sizeof(t_list));
    //node_3->content = ptr;
    //node_3->next = NULL;
    node_3->content = &nbr;
    node_3->next = NULL; */
    
    t_list *node_4;
    float nbr_f = 2.05;
    float *ptr2 = &nbr_f;
    node_4 = (t_list*)malloc(sizeof(t_list));
    node_4->content = ptr2;
    node_4->next = NULL;
    
    printf("\n\n\nnode_1 is equal to: %s\n\n", (char*) node_1->content);
    printf("node_2 is equal to: %s\n\n", (char*) node_2->content);
    printf("node 3 is equal to: %d\n\n", *(int*)node_3->content);
    printf("node 4 is a float: %.2f\n\n\n\n",*(float*)node_4->content);
    
    lstadd_front (&lst_pointer, node_1);
    printf("value of add_front: %s\n",(char*) lst_pointer -> content);
    //printf("\nvalue of add_front %d\n",*(int*) lst_pointer -> next-> content);
    lstadd_front (&lst_pointer, node_2);
    printf("\nvalue of add_front: %s\n\n",(char*) lst_pointer -> content);
    //printf("\nvalue of NEXT add_front %d\n",*(int*) lst_pointer -> next-> content);
    add_back (&lst_pointer, node_3);
    printf("\nadd_back INT %d\n\n",*(int*) lst_pointer->next->next->content);
    add_back (&lst_pointer, node_4);
    printf("addback float is = to: %f\n\n\n\n",*(float*)lst_pointer->next->next->next->content);
    // Print the contents of the list
    printf("\nlist size is %d\n\n\n", lst_size (lst_pointer));
    

    while (lst_pointer != NULL)
    {
        printf("\nIteracting list: %s\n", (char*)lst_pointer->content);
        lst_pointer = lst_pointer->next;
    }
    //printf("\n\n\nlist size is %d\n\n\n\n", lst_size (lst_pointer));
    //free(node_3);
    //free(node_4);
    return (0);
}
