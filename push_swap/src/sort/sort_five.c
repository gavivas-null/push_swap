/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:01:05 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/31 22:41:13 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	sort_five(t_node **a, t_node **b)
{
	int	total;

	total = count_nodes(*a);
	if (total == 5)
	{
		move_to_top_and_push(a, b, 0, total);
		move_to_top_and_push(a, b, 1, count_nodes(*a));
	}
	else if (total == 4)
		move_to_top_and_push(a, b, 0, total);
	sort_three(a);
	pa(a, b);
	if (total == 5)
		pa(a, b);
}
