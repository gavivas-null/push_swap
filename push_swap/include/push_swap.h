/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:20:48 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/19 17:38:09 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# include "../Libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

char	**get_clean_args(int argc, char **argv);
int		ft_is_valid_number(char *str);
t_node	*build_stack(char **args);
void	assign_index(t_node *stack);
int		is_sorted(t_node *stack);
int		has_duplicates(char **args);
int		is_int_range(char *str);


//---------------------------List---------------------------
t_node	*new_node(int value);
t_node	*last_node(t_node *lst);
void	add_back(t_node **lst, t_node *new);
void	add_front(t_node **lst, t_node *new);
void	clear_stack(t_node **lst);

#endif