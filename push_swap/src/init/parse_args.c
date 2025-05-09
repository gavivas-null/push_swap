/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:49:18 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/09 19:13:51 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**get_clean_args(int argc, char **argv)
{
	int		i;
	char	**args;
	char	*joined;

	if (argc < 2)
		return (ft_printf("Error.\nNo se pasaron argumentos.\n"), NULL);
	i = 1;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (NULL);
		return (args);
	}
	else if (argc > 2)
	{
		joined = ft_strdup(argv[1]);
		i = 2;
		while (i < argc)
		{
			joined = ft_strjoin_free(joined, " ");
			joined = ft_strjoin_free(joined, argv[i]);
			i++;
		}
		args = ft_split(joined, ' ');
		free(joined);
		return (args);
	}
	return (NULL);
}
