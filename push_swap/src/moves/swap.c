/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:04:35 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/30 18:19:41 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_node **a)
{
	int	tmp_value;
	int	tmp_index;

	if (!*a || !(*a)->next)
		return ;
	tmp_value = (*a)->value;
	tmp_index = (*a)->index;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = tmp_value;
	(*a)->next->index = tmp_index;
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	int	tmp_value;
	int	tmp_index;

	if (!*b || !(*b)->next)
		return ;
	tmp_value = (*b)->value;
	tmp_index = (*b)->index;
	(*b)->value = (*b)->next->value;
	(*b)->index = (*b)->next->index;
	(*b)->next->value = tmp_value;
	(*b)->next->index = tmp_index;
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	int	tmp_value;
	int	tmp_index;

	if (*a && (*a)->next)
	{
		tmp_value = (*a)->value;
		tmp_index = (*a)->index;
		(*a)->value = (*a)->next->value;
		(*a)->index = (*a)->next->index;
		(*a)->next->value = tmp_value;
		(*a)->next->index = tmp_index;
	}
	if (*b && (*b)->next)
	{
		tmp_value = (*b)->value;
		tmp_index = (*b)->index;
		(*b)->value = (*b)->next->value;
		(*b)->index = (*b)->next->index;
		(*b)->next->value = tmp_value;
		(*b)->next->index = tmp_index;
	}
	ft_printf("ss\n");
}
