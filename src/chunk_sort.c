/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:28:38 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/11 13:20:05 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	calulate_operations(t_stack **a, t_stack **b, int pivot, int max)
{
	while ((*a)->index != first_top(a, max))
		ft_rotate_a(a);
	if ((*a)->index > pivot)
	{
		ft_push_b(b, a);
		ft_rotate_b(b);
	}
	else
		ft_push_b(b, a);
	return (1);
}

static void	sort_back(t_stack **a, t_stack **b)
{
	int	max;

	max = ft_stack_size(b) - 1;
	while (max >= 0)
	{
		if (stack_pos(b, max) == 1)
		{
			while ((*b)->index != max)
				ft_rotate_b(b);
			ft_push_a(a, b);
		}
		else if (stack_pos(b, max) == 2)
		{
			while ((*b)->index != max)
				ft_reverse_rotate_b(b);
			ft_push_a(a, b);
		}
		max--;
	}
}

void	chunk_sort(t_stack **a, t_stack **b, int chunk)
{
	int	chunksize;
	int	pivot;
	int	max;
	int	min;
	int	size;

	size = ft_stack_size(a);
	chunksize = size / chunk;
	min = 0;
	max = chunksize - 1;
	pivot = max / 2;
	while (ft_stack_size(a))
	{
		while (min <= max && min < size)
			min += calulate_operations(a, b, pivot, max);
		max += chunksize;
		pivot = max - (chunksize / 2);
	}
	sort_back(a, b);
}
