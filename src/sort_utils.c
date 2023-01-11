/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:30:13 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/10 14:19:08 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first_top(t_stack **a, int max)
{
	t_stack	*tmp;

	tmp = *a;
	while (!(tmp->index <= max))
		tmp = tmp->next;
	return (tmp->index);
}

int	stack_pos(t_stack **stack, int max)
{
	int		pos;
	int		mid;
	int		size;
	t_stack	*tmp;

	pos = 0;
	size = ft_stack_size(stack);
	mid = size / 2;
	tmp = *stack;
	while (tmp->index != max)
	{
		tmp = tmp->next;
		pos++;
	}
	if (pos > mid)
		return (2);
	if (pos <= mid)
		return (1);
	return (0);
}
