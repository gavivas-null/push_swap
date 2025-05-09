/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:21:34 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:19 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**args;

	i = 0;
	args = get_clean_args(argc, argv);
	if (!args)
		return (ft_printf("Error: argumentos inválidos\n"), 1);
	while (args[i])
	{
		ft_printf("%s\n", args[i]);
		i++;
	}
	return (0);
}
