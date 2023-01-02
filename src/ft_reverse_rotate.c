/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:11:13 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/14 12:18:15 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_stack **stack)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = *stack;
	last = ft_stackget_last(stack);
	last->next = *stack;
	ft_stackadd_front(stack, last);
	while (tmp)
	{
		if (tmp->next == last)
			tmp->next = NULL;
		tmp = tmp->next;
	}
	ft_putendl_fd("rra", 1);
}

void	ft_reverse_rotate_b(t_stack **stack)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = *stack;
	last = ft_stackget_last(stack);
	last->next = *stack;
	ft_stackadd_front(stack, last);
	while (tmp)
	{
		if (tmp->next == last)
			tmp->next = NULL;
		tmp = tmp->next;
	}
	ft_putendl_fd("rrb", 1);
}

void	ft_reverse_rotate_rotate(t_stack **a, t_stack **b)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = *a;
	last = ft_stackget_last(a);
	last->next = *a;
	ft_stackadd_front(a, last);
	while (tmp)
	{
		if (tmp->next == last)
			tmp->next = NULL;
		tmp = tmp->next;
	}
	tmp = *b;
	last = ft_stackget_last(b);
	last->next = *b;
	ft_stackadd_front(b, last);
	while (tmp)
	{
		if (tmp->next == last)
			tmp->next = NULL;
		tmp = tmp->next;
	}
	ft_putendl_fd("rrr", 1);
}
