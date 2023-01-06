/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:29:27 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/06 12:44:17 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_size_two(t_stack **a, t_stack **b)
{
	if (is_sorted(a))
		return ;
	ft_swap_a(a);
	b = NULL;
}

static void	sort_size_three(t_stack **a, t_stack **b, int max)
{
	if (!is_sorted(a))
	{
		if (is_rev_sorted(a))
		{
			ft_rotate_a(a);
			ft_swap_a(a);
		}
		else if ((*a)->index == max - 2 && ft_stacklast(*a)->index == max - 1)
		{
			ft_reverse_rotate_a(a);
			ft_swap_a(a);
		}
		else if ((*a)->index == max && ft_stacklast(*a)->index == max - 1)
			ft_rotate_a(a);
		else if ((*a)->index == max - 1)
		{
			if (ft_stacklast(*a)->index == max - 2)
				ft_reverse_rotate_a(a);
			else
				ft_swap_a(a);
		}
	}
	b = NULL;
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stack_size(a) == 2)
		sort_size_two(a, b);
	if (ft_stack_size(a) == 3)
		sort_size_three(a, b, ft_stack_size(a) - 1);
}
