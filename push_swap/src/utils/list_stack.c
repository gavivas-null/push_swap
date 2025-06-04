/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:22:10 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/30 18:18:15 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	add_back(t_node **lst, t_node *new)
{
	if (new)
	{
		if (!*lst)
		{
			*lst = new;
		}
		else
			last_node(*lst)->next = new;
	}
}

void	clear_stack(t_node **lst)
{
	t_node	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		free (*lst);
		*lst = aux;
	}
}

void	add_front(t_node **lst, t_node *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

t_node	*last_node(t_node *lst)
{
	t_node	*new;

	new = lst;
	while (new != NULL && new->next != NULL)
	{
		new = new->next;
	}
	return (new);
}

t_node	*new_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	return (new);
}
