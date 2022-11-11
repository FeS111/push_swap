/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:57:20 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 15:45:36 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = *stack;
	b = a->next;
	c = b->next;
	b->next = a;
	a->next = c;
	*stack = b;
}

void	ft_push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = (*b)->next;
	ft_stackadd_front(a, *b);
	*b = tmp;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;

	first = *stack;
	*stack = (*stack)->next;

	first->next = NULL;
	ft_stackadd_back(stack, first);
}

void	ft_reverse_rotate(t_stack **stack)
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
}
