/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:59:14 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/04 20:29:52 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	int		pos;
	t_node	*tmp;

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

int	find_max_index(t_node *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	find_min_index(t_node *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}
