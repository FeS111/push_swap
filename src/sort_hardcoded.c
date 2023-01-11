/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hardcoded.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:36:35 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/11 12:36:26 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_size_two(t_stack **a)
{
	if (is_sorted(a))
		return ;
	ft_swap_a(a);
}

void	sort_size_three(t_stack **a, int max)
{
	if (!is_sorted(a))
	{
		if (is_rev_sorted(a))
		{
			ft_rotate_a(a);
			ft_swap_a(a);
		}
		else if ((*a)->index == max - 2 && ft_stacklast(a)->index == max - 1)
		{
			ft_reverse_rotate_a(a);
			ft_swap_a(a);
		}
		else if ((*a)->index == max && ft_stacklast(a)->index == max - 1)
			ft_rotate_a(a);
		else if ((*a)->index == max - 1)
		{
			if (ft_stacklast(a)->index == max - 2)
				ft_reverse_rotate_a(a);
			else
				ft_swap_a(a);
		}
	}
}

void	sort_size_five(t_stack **a, t_stack **b)
{
	int	min;
	int	max;

	min = 0;
	max = ft_stack_size(a) - 1;
	while (ft_stack_size(a) > 3 && !is_sorted(a))
	{
		if (stack_pos(a, min) == 1)
			while ((*a)->index != min)
				ft_rotate_a(a);
		if (stack_pos(a, min) == 2)
			while ((*a)->index != min)
				ft_reverse_rotate_a(a);
		if (!is_sorted(a))
			ft_push_b(b, a);
		min++;
	}
	if (max == 4)
		sort_size_three(a, 4);
	if (max == 3)
		sort_size_three(a, 3);
	while (ft_stack_size(b))
		ft_push_a(a, b);
}
