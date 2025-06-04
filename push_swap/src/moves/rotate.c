/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:05:10 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/30 18:05:13 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_node **a)
{
	t_node	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last_node(*a)->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	t_node	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	last_node(*b)->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		last_node(*a)->next = tmp;
		tmp->next = NULL;
	}
	if (*b && (*b)->next)
	{
		tmp = *b;
		*b = (*b)->next;
		last_node(*b)->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("rr\n");
}
