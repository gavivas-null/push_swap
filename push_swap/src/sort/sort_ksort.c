/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ksort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:01:40 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/04 18:31:13 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ksort_a(t_node **a, t_node **b, int range)
{
	int	i;
	int	index;

	i = 0;
	while (*a)
	{
		index = (*a)->index;
		if (index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if (index <= i + range)
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
	int	position;
	int	index;
	int	max;
	int	count;

	while (*b)
	{
		max = find_max_index(*b);
		position = position_of_index(*b, max);
		index = (*b)->index;
		count = count_nodes(*b) / 2;
		if (index == max)
			pa(a, b);
		else if (position <= count)
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
