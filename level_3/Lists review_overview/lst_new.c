/* /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:18:38 by jode-jes          #+#    #+#             */
/*   Updated: 2023/11/30 17:07:53 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_data
{
    int value1;
    float value2;
    char *value3;
} t_data;

typedef struct s_list
{
    int *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
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


/* 

int main(void)
{
    printf("\n");
    
    
    
    // STRUCT Example usage of ft_lstnew with an int, a float, and a string
    
    t_data content_values = {42, 3.14, "hello"};
    t_data *content_ptr = &content_values;
    t_list *node = ft_lstnew(content_ptr);

    if (node == NULL) { // check if ft_lstnew failed to create a new node
		printf("Failed to create a new node!\n");
		return (1);
	}
    
	printf("STRUCT node created successfully!\n");
	
        printf("Content values of the STRUCT node: %d, %f, %s\n",
            ((t_data *)(node->content))->value1,
            ((t_data *)(node->content))->value2,
            ((t_data *)(node->content))->value3);
  
    printf("\n");
    
    
    
    // DYNAMIC STRING Example usage of ft_lstnew with a string

    char *str = strdup("Hello World!");
    node = ft_lstnew(str);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("STRING node created successfully!\n");
    //while (node)
    //{
        printf("Content values of the string node: %s\n", (char *)(node->content));
        //node = node->next;
    //}
    
     printf("\n");
    
    
    
    //DYNAMIC INT Example usage of ft_lstnew with an int allocating dynamic memory - malloc
    
    int *num = (int *)malloc(sizeof(int));
    *num = 42;
    node = ft_lstnew(num);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("DYNAMIC INT node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %d\n", *((int *)(node->content)));
        node = node->next;
    }
    
     printf("\n");
    
    
    
    // INT Example usage of ft_lstnew with an integer without malloc 
    int intValue = 42;
    t_list *new_node;
    
    new_node = ft_lstnew(&intValue);

    if (node1 == NULL)
    {
        printf("Failed to create a new node!\n");
        return 1;
    }

    // Access and print the content of the node
    int *valuePtr = (int *)(node1->content);
    printf("INT Node Content: %d\n", *valuePtr);

        
    
    // FLOAT Example usage of ft_lstnew with a float
    float *f = (float *)malloc(sizeof(float));
    *f = 3.14;
    node = ft_lstnew(f);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("FLOAT node created successfully!\n");
        printf("Content values of the FLOAT new node: %f\n", *((float *)(node->content)));

    printf("\n");  
             
    // Example usage of ft_lstnew with a struct
    t_data *data = (t_data *)malloc(sizeof(t_data));
    data->value1 = 42;
    data->value2 = 3.14;
    data->value3 = strdup("Hello World!");
    node = ft_lstnew(data);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("New node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %d, %f, %s\n",
            ((t_data *)(node->content))->value1,
            ((t_data *)(node->content))->value2,
            ((t_data *)(node->content))->value3);
        node = node->next;
    }
    
    printf("\n");
    // Example usage of ft_lstnew with a struct and a string
    t_data *data2 = (t_data *)malloc(sizeof(t_data));
    data2->value1 = 42;
    data2->value2 = 3.14;
    data2->value3 = strdup("Hello World!");
    node = ft_lstnew(data2->value3);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("New node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %s\n", (char *)(node->content));
        node = node->next;
    }
    
    printf("\n");
    // Example usage of ft_lstnew with a struct and an int
    t_data *data3 = (t_data *)malloc(sizeof(t_data));
    data3->value1 = 42;
    data3->value2 = 3.14;
    data3->value3 = strdup("Hello World!");
    node = ft_lstnew(&data3->value1);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("New node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %d\n", *((int *)(node->content)));
        node = node->next;
    }
    
    printf("\n");
    // Example usage of ft_lstnew with a struct and a float
    t_data *data4 = (t_data *)malloc(sizeof(t_data));   
    data4->value1 = 42;
    data4->value2 = 3.14;
    data4->value3 = strdup("Hello World!");
    node = ft_lstnew(&data4->value2);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("New node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %f\n", *((float *)(node->content)));
        node = node->next;
    }
    
    printf("\n");
    // Example usage of ft_lstnew with a struct and a struct
    t_data *data5 = (t_data *)malloc(sizeof(t_data));
    data5->value1 = 42;
    data5->value2 = 3.14;
    data5->value3 = strdup("Hello World!");
    node = ft_lstnew(data5);
    if (node == NULL) { // check if ft_lstnew failed to create a new node
        printf("Failed to create a new node!\n");
        return (1);
    }
    printf("New node created successfully!\n");
    while (node)
    {
        printf("Content values of the new node: %d, %f, %s\n",
            ((t_data *)(node->content))->value1,
            ((t_data *)(node->content))->value2,
            ((t_data *)(node->content))->value3);
        node = node->next;
    }
    
    free(node);
    
    return 0;
}
 */