/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:49:18 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/28 20:34:47 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**get_clean_args(int argc, char **argv)
{
	int		i;
	char	**args;
	char	*joined;

	i = 1;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0])
		{
			if (args)
				ft_free_split(args);
			return (NULL);
		}
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
		if (!args || !args[0])
		{
			if (args)
				ft_free_split(args);
			free(joined);
			return (NULL);
		}
		free(joined);
		return (args);
	}
	return (NULL);
}
