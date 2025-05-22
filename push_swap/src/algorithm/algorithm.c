/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielvivas <gabrielvivas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:09:22 by gavivas-          #+#    #+#             */
/*   Updated: 2025/05/22 21:27:23 by gabrielviva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_node **a)
{
	int	tmp_value;
	int	tmp_index;

	if (!*a || !(*a)->next)
		return ;
	tmp_value = (*a)->value;
	tmp_index = (*a)->index;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = tmp_value;
	(*a)->next->index = tmp_index;
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	int	tmp_value;
	int	tmp_index;

	if (!*b || !(*b)->next)
		return ;
	tmp_value = (*b)->value;
	tmp_index = (*b)->index;
	(*b)->value = (*b)->next->value;
	(*b)->index = (*b)->next->index;
	(*b)->next->value = tmp_value;
	(*b)->next->index = tmp_index;
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	int	tmp_value;
	int	tmp_index;

	if (*a && (*a)->next)
	{
		tmp_value = (*a)->value;
		tmp_index = (*a)->index;
		(*a)->value = (*a)->next->value;
		(*a)->index = (*a)->next->index;
		(*a)->next->value = tmp_value;
		(*a)->next->index = tmp_index;
	}
	if (*b && (*b)->next)
	{
		tmp_value = (*b)->value;
		tmp_index = (*b)->index;
		(*b)->value = (*b)->next->value;
		(*b)->index = (*b)->next->index;
		(*b)->next->value = tmp_value;
		(*b)->next->index = tmp_index;
	}
	ft_printf("ss\n");
}

void	pa(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	pb(t_node **b, t_node **a)
{
	t_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
}

void	ra(t_node **a)
{
	t_node	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last_node(*a)->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	t_node	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	last_node(*b)->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		last_node(*a)->next = tmp;
		tmp->next = NULL;
	}
	if (*b && (*b)->next)
	{
		tmp = *b;
		*b = (*b)->next;
		last_node(*b)->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("rr\n");
}

void	rra(t_node **a)
{
	t_node	*tmp;
	t_node	*before_last;

	if (!*a || !(*a)->next)
		return ;
	tmp = last_node(*a);
	before_last = *a;
	while (before_last->next != tmp)
		before_last = before_last->next;
	before_last->next = NULL;
	tmp->next = *a;
	*a = tmp;
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	t_node	*tmp;
	t_node	*before_last;

	if (!*b || !(*b)->next)
		return ;
	tmp = last_node(*b);
	before_last = *b;
	while (before_last->next != tmp)
		before_last = before_last->next;
	before_last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	t_node	*tmp;
	t_node	*before_last;

	if (*a && (*a)->next)
	{
		tmp = last_node(*a);
		before_last = *a;
		while (before_last->next != tmp)
			before_last = before_last->next;
		before_last->next = NULL;
		tmp->next = *a;
		*a = tmp;	
	}
	if (*b && (*b)->next)
	{
		tmp = last_node(*b);
		before_last = *b;
		while (before_last->next != tmp)
			before_last = before_last->next;
		before_last->next = NULL;
		tmp->next = *b;
		*b = tmp;
	}
	ft_printf("rrr\n");
}