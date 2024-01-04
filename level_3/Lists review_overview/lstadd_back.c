/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:36:07 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/03 18:07:16 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


t_list *ft_lstnew(void *content)
{
    t_list *new_node;
    
    new_node =(t_list *) malloc (sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return;
	}
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

int	main(void)
{
	t_list	*lst_pointer;
	t_list	node;
	t_list	node2;

	lst_pointer = NULL;
	node.content = "World";
	node.next = NULL;
	node2.content = "Hello";
	node2.next = NULL;
	ft_lstadd_back(&lst_pointer, &node);
	ft_lstadd_back(&lst_pointer, &node2);
	printf("%s\n", (char*)lst_pointer->content);
	printf("%s\n", (char*)lst_pointer->next->content);
	return (0);
}

int	main(void)
{
	t_list	*lst_pointer;
	t_list	*node;
	t_list	*node2;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = "Hello";
	node->next = NULL;
	node2 = (t_list *)malloc(sizeof(t_list));
	if (!node2)
		return (0);
	node2->content = "World";
	node2->next = NULL;
	ft_lstadd_back(&lst_pointer, &node);
	ft_lstadd_back(&lst_pointer, &node2);
	printf("%s\n", lst_pointer->content);
	printf("%s\n", lst_pointer->next->content);
	return (0);
}

int main() 
{
    t_list *lst = NULL;
    t_list *new_node1;
    t_list *new_node2;
    t_list *new_node3;

    // Create a new node with content "hello"
    new_node1 = ft_lstnew("hello");
    
    //printf("\n%s \n\n", (char*)new_node1->content);
    
    int intvalue = 42;
    new_node2 = ft_lstnew(&intvalue);
    //printf("\n%d \n\n", *(int*)new_node2->content);

    // Add the new node to the end of the list
    ft_lstadd_back(&lst, new_node1);
    
    // Create another node with content "world"
    float floatvalue = 42.5;
    new_node3 = ft_lstnew(&floatvalue);

    // Add the second node to the end of the list
    ft_lstadd_back(&lst, new_node3);

    // Print the contents of the list
    //while (lst)
    //{
        printf("\n%s, %d, %0.2f \n\n", (char*)new_node1->content, *(int*)new_node2->content, *(float*)new_node3->content);

       // lst = lst->next;
    //}
    return (0);
}
 