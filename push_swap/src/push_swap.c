/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:21:34 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/26 18:28:22 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**args;
	t_node	*stack_a;

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
	assign_index(stack_a);
	if (!is_sorted(stack_a) && count_nodes(stack_a) == 2)
		sort_two(&stack_a);
	clear_stack(&stack_a);
	ft_free_split(args);
	return (0);
}
