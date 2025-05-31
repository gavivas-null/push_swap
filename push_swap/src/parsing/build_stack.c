/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:28:06 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/31 18:09:46 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*build_stack(char **args)
{
	t_node	*stack;
	t_node	*node;
	int		i;
	int		value;

	i = 0;
	stack = NULL;
	while (args[i])
	{
		value = ft_atoi(args[i]);
		node = new_node(value);
		add_back(&stack, node);
		i++;
	}
	return (stack);
}
