/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_tst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:23:31 by jode-jes          #+#    #+#             */
/*   Updated: 2023/11/30 15:42:48 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    int *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    
    if (!new_node)
        return NULL;

    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

int	main(void)
{
	t_list	*lst_pointer;
	t_list	*node;
	t_list	*node2;

	lst_pointer = NULL;
    
	node = ft_lstnew("World");
	node2 = ft_lstnew("Hello");
	ft_lstadd_back(&lst_pointer, &node);
	ft_lstadd_back(&lst_pointer, &node2);
	printf("%s\n", (char *)lst_pointer->content);
	printf("%s\n", (char *)lst_pointer->next->content);
	return (0);
}

int main(void)
{
    
 // Example usage of ft_lstnew with an integer without malloc 
    int intValue = 42;
    t_list *node1 = ft_lstnew(&intValue);

    if (node1 == NULL)
    {
        printf("Failed to create a new node!\n");
        return 1;
    }

    // Access and print the content of the node
    int *valuePtr = (int *)(node1->content);
    printf("INT Node Content: %d\n", *valuePtr);

    return 0;
}