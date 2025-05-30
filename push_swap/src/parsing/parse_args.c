/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:49:18 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/30 18:32:45 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**split_single_arg(char *argv)
{
	char	**args;

	args = ft_split(argv, ' ');
	if (!args || !args[0])
	{
		if (args)
			ft_free_split(args);
		return (NULL);
	}
	return (args);
}

char	**join_and_split_args(int argc, char **argv)
{
	char	**args;
	char	*joined;
	int		i;

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
		return (free(joined), NULL);
	}
	return (free(joined), args);
}

char	**get_clean_args(int argc, char **argv)
{
	if (argc == 2)
		return (split_single_arg(argv[1]));
	else if (argc > 2)
		return (join_and_split_args(argc, argv));
	return (NULL);
}
