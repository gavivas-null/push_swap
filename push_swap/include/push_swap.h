/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:20:48 by gavivas-          #+#    #+#             */
/*   Updated: 2025/06/04 18:18:11 by gavivas-         ###   ########.fr       */
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

//------------------------Parsing------------------------
char	**get_clean_args(int argc, char **argv);
char	**join_and_split_args(int argc, char **argv);
char	**split_single_arg(char *argv);
t_node	*build_stack(char **args);
void	assign_index(t_node *stack);
int		is_sorted(t_node *stack);
int		has_duplicates(char **args);
int		has_empty_or_space_args(int argc, char **argv);
int		validate_error(int argc, char **argv, char **args);

//------------------------Moves------------------------
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);
void	pa(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

//------------------------Sort------------------------
void	sort_two(t_node **a);
void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	sort_ksort(t_node **a, t_node **b);
void	ksort_a(t_node **a, t_node **b, int count);
void	ksort_b(t_node **a, t_node **b);

//------------------------List------------------------
t_node	*new_node(int value);
t_node	*last_node(t_node *lst);
void	add_back(t_node **lst, t_node *new);
void	add_front(t_node **lst, t_node *new);
void	clear_stack(t_node **lst);
int		count_nodes(t_node *lst);
int		get_chunk_count(int total);
int		position_of_index(t_node *stack, int target_index);
int		find_max_index(t_node *stack);
void	move_to_top_and_push(t_node **a, t_node **b, int index, int total);
int		has_index_in_range(t_node *a, int min, int max);

#endif