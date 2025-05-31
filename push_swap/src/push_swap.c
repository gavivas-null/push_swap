/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:21:34 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/31 22:20:16 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	validate_error(int argc, char **argv, char **args)
{
	int	i;

	i = 0;
	if (!args)
		return (ft_printf("Error: argumentos inválidos\n"), 1);
	if (has_empty_or_space_args(argc, argv))
	{
		ft_free_split(args);
		return (ft_printf("Error.\n"), 1);
	}
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
	return (0);
}

void	sorted_cases(t_node **stack_a, t_node **stack_b, int size)
{
	assign_index(*stack_a);
	if (!is_sorted(*stack_a))
	{
		if (size == 2)
			sort_two(stack_a);
		else if (size == 3)
			sort_three(stack_a);
		else if (size == 5 || size == 4)
			sort_five(stack_a, stack_b);
		else if (size >= 6)
			sort_radix(stack_a, stack_b);
	}
}

int	main(int argc, char **argv)
{
	int		size;
	char	**args;
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (1);
	args = get_clean_args(argc, argv);
	if (validate_error(argc, argv, args))
		return (1);
	stack_a = build_stack(args);
	stack_b = NULL;
	size = count_nodes(stack_a);
	if (size == 1)
	{
		clear_stack(&stack_a);
		ft_free_split(args);
		return (ft_printf("Error. Minimo 2 numeros\n"), 1);
	}
	sorted_cases(&stack_a, &stack_b, size);
	clear_stack(&stack_a);
	ft_free_split(args);
	return (0);
}
