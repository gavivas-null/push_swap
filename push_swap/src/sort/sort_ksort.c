/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ksort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:01:40 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/04 21:48:20 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ksort_a(t_node **a, t_node **b, int range)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			if (*a && (*a)->index > i + range)
				rr(a, b);
			else
				rb(b);
			i++;
		}
		else if ((*a)->index <= i + range)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	ksort_b(t_node **a, t_node **b)
{
	int	pos;
	int	max;
	int	count;

	while (*b)
	{
		max = find_max_index(*b);
		pos = position_of_index(*b, max);
		count = count_nodes(*b) / 2;
		if ((*b)->index == max)
			pa(a, b);
		else if ((*b)->next && (*b)->next->index == max)
		{
			sb(b);
			pa(a, b);
		}
		else if (pos <= count)
			rb(b);
		else
			rrb(b);
	}
}

void	sort_ksort(t_node **a, t_node **b)
{
	int	total;
	int	range;

	total = count_nodes(*a);
	range = ft_sqrt(total) * 14 / 10;
	ksort_a(a, b, range);
	ksort_b(a, b);
}
