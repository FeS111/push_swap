/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:06:54 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/14 12:08:15 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stack **stack)
{
	t_stack	*first;

	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	ft_stackadd_back(stack, first);
	ft_putendl_fd("ra", 1);
}

void	ft_rotate_b(t_stack **stack)
{
	t_stack	*first;

	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	ft_stackadd_back(stack, first);
	ft_putendl_fd("rb", 1);
}

void	ft_rotate_rotate(t_stack **a, t_stack **b)
{
	t_stack	*first;

	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	ft_stackadd_back(a, first);
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	ft_stackadd_back(b, first);
	ft_putendl_fd("rr", 1);
}
