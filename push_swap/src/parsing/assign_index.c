/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:36:50 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/01 19:13:44 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	assign_index(t_node *stack)
{
	t_node	*a;
	t_node	*b;
	int		index;

	a = stack;
	while (a)
	{
		index = 0;
		b = stack;
		while (b)
		{
			if (b->value < a->value)
				index++;
			b = b->next;
		}
		a->index = index;
		a = a->next;
	}
}
