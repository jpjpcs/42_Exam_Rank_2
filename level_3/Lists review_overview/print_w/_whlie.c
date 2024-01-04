/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _whlie.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:46:56 by jode-jes          #+#    #+#             */
/*   Updated: 2023/12/04 11:50:50 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*string;
	void			*integer;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

// com malloc
int	main(void)
{
	t_list	*lst_pointer;
	t_list	node;
	t_list	node2;

	lst_pointer = NULL;
	
    node.string = "World";
	node.integer = malloc(sizeof(int));
	
	*(int *)node.integer = 42;
	node.next = NULL;
	
    node2.string = "Hello";
	node2.integer = malloc(sizeof(int));
	*(int *)node2.integer = 21;
	node2.next = NULL;
	
    ft_lstadd_back(&lst_pointer, &node);
	ft_lstadd_back(&lst_pointer, &node2);
	
    while (lst_pointer != NULL)
	{
		printf("%s\n", (char *)lst_pointer->string);
		printf("%d\n", *(int *)lst_pointer->integer);
		lst_pointer = lst_pointer->next;
	}
	free(node.integer);
	free(node2.integer);
	return (0);
}

// sem malloc
int	main(void)
{
	t_list	*lst_pointer;
	t_list	node;
	t_list	node2;
	int		integer;
	int		integer2;

	lst_pointer = NULL;
    
	node.string = "World";
	integer = 42;
	node.integer = (void *)&integer; //ponteiro void. na struct o conteúdo é ptr void. se fosse int integer não precisava de fazer malloc - void *integer;
	node.next = NULL;
    
	node2.string = "Hello";
	integer2 = 21;
	node2.integer = (void *)&integer2;
	node2.next = NULL;
    
	ft_lstadd_back(&lst_pointer, &node);
	ft_lstadd_back(&lst_pointer, &node2);
    
	while (lst_pointer != NULL)
	{
		printf("%s\n", (char *)lst_pointer->string);
		printf("%d\n", *(int *)lst_pointer->integer);
		lst_pointer = lst_pointer->next;
	}
	return (0);
}
	lst_pointer = NULL;
	
    node.string = "World";
	node.integer = malloc(sizeof(int));
	
	*(int *)node.integer = 42;
	node.next = NULL;
	
    node2.string = "Hello";
	node2.integer = malloc(sizeof(int));
	*(int *)node2.integer = 21;
	node2.next = NULL;