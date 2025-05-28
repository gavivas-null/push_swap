/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:22:10 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/28 20:04:55 by gavivas-         ###   ########.fr       */
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

int	count_nodes(t_node *lst)
{
	t_node	*tmp;
	int		count;

	count = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	position_of_index(t_node *stack, int target_index)
{
	int	pos;
	t_node *tmp;

	pos = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index == target_index)
			return (pos);
		else
			tmp = tmp->next;
		pos++;
	}
	return (-1);
}

void	move_to_top_and_push(t_node **a, t_node **b, int index, int total)
{
	int	pos;
	int	steps;

	pos = position_of_index(*a, index);
	steps = total - pos;
	if (pos <= (total / 2))
	{
		steps = pos;
		while (steps > 0)
		{
			ra(a);
			steps--;
		}
	}
	else
	{
		steps = total - pos;
		while (steps > 0)
		{
			rra(a);
			steps--;
		}	
	}
	pb(b, a);
}
