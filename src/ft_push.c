/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:08:41 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/11 11:47:01 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = (*b)->next;
	ft_stackadd_front(a, *b);
	*b = tmp;
	ft_putendl_fd("pa", 1);
}

void	ft_push_b(t_stack **b, t_stack **a)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = (*a)->next;
	ft_stackadd_front(b, *a);
	*a = tmp;
	ft_putendl_fd("pb", 1);
}
