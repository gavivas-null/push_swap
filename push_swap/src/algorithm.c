/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:09:22 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/20 18:37:38 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_node **stack)
{
	int	tmp_value;
	int	tmp_index;

	if (!*stack || !(*stack)->next)
		return ;
	tmp_value = (*stack)->value;
	tmp_index = (*stack)->index;
	(*stack)->value = (*stack)->next->value;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->value = tmp_value;
	(*stack)->next->index = tmp_index;
	ft_printf("sa\n");
}