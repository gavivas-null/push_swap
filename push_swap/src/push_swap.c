/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:21:34 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/12 20:47:24 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**args;
	t_node	*stack_a;
	t_node	*temp;

	i = 0;
	args = get_clean_args(argc, argv);
	if (!args)
		return (ft_printf("Error: argumentos inválidos\n"), 1);
	while (args[i])
	{
		if (!ft_is_valid_number(args[i]))
		{
			ft_free_split(args);	
			return (ft_printf("Error.\n"), 1);
		}
		i++;
	}
	i = 0;
	stack_a = build_stack(args);
	assign_index(stack_a);
	temp = stack_a;
	while (temp)
	{
		ft_printf("value: %d, index: %d\n", temp->value, temp->index);
		temp = temp->next;
	}
	clear_stack(&stack_a);
	ft_free_split(args);
	return (0);
}
