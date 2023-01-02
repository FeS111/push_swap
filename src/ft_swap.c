/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:57:20 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/14 12:11:05 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack **stack)
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
	ft_putendl_fd("sb", 1);
}

void	ft_swap_b(t_stack **stack)
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
	ft_putendl_fd("sb", 1);
}

void	ft_swap_swap(t_stack **astack, t_stack **bstack)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = *astack;
	b = a->next;
	c = b->next;
	b->next = a;
	a->next = c;
	*astack = b;
	a = *bstack;
	b = a->next;
	c = b->next;
	b->next = a;
	a->next = c;
	*bstack = b;
	ft_putendl_fd("ss", 1);
}
