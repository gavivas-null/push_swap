/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:06:57 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/30 18:07:00 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_node **a)
{
	t_node	*tmp;
	t_node	*before_last;

	if (!*a || !(*a)->next)
		return ;
	tmp = last_node(*a);
	before_last = *a;
	while (before_last->next != tmp)
		before_last = before_last->next;
	before_last->next = NULL;
	tmp->next = *a;
	*a = tmp;
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	t_node	*tmp;
	t_node	*before_last;

	if (!*b || !(*b)->next)
		return ;
	tmp = last_node(*b);
	before_last = *b;
	while (before_last->next != tmp)
		before_last = before_last->next;
	before_last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	t_node	*tmp;
	t_node	*before_last;

	if (*a && (*a)->next)
	{
		tmp = last_node(*a);
		before_last = *a;
		while (before_last->next != tmp)
			before_last = before_last->next;
		before_last->next = NULL;
		tmp->next = *a;
		*a = tmp;
	}
	if (*b && (*b)->next)
	{
		tmp = last_node(*b);
		before_last = *b;
		while (before_last->next != tmp)
			before_last = before_last->next;
		before_last->next = NULL;
		tmp->next = *b;
		*b = tmp;
	}
	ft_printf("rrr\n");
}
