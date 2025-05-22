/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielvivas <gabrielvivas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:21:34 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/22 21:28:56 by gabrielviva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**args;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*temp;

	i = 0;
	args = get_clean_args(argc, argv);
	if (!args)
		return (ft_printf("Error: argumentos inválidos\n"), 1);
	while (args[i])
	{
		if (!ft_is_valid_number(args[i]) || !is_int_range(args[i]))
		{
			ft_free_split(args);
			return (ft_printf("Error.\n"), 1);
		}
		i++;
	}
	if (has_duplicates(args))
	{
		ft_free_split(args);
		return (ft_printf("Error: números duplicados\n"), 1);
	}
	stack_a = build_stack(args);
	stack_b = build_stack(args);
	assign_index(stack_a);
	assign_index(stack_b);
	rrr(&stack_a, &stack_b);
	ft_printf("STACK A (tras rrr):\n");
	temp = stack_a;
	while (temp)
	{
		ft_printf("value: %d, index: %d\n", temp->value, temp->index);
		temp = temp->next;
	}
	
	ft_printf("STACK B (tras rrr):\n");
	temp = stack_b;
	while (temp)
	{
		ft_printf("value: %d, index: %d\n", temp->value, temp->index);
		temp = temp->next;
	}
	clear_stack(&stack_a);
	ft_free_split(args);
	return (0);
}
