/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:27:27 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/06 12:46:29 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*tmp;
	int		last;

	tmp = *stack;
	last = 0;
	while (tmp)
	{
		if (tmp->index < last)
			return (0);
		last = tmp->index;
		tmp = tmp->next;
	}
	return (1);
}

int	is_rev_sorted(t_stack **stack)
{
	t_stack	*tmp;
	int		last;

	tmp = *stack;
	last = ft_stack_size(stack) - 1;
	while (tmp)
	{
		if (tmp->index > last)
			return (0);
		last = tmp->index;
		tmp = tmp->next;
	}
	return (1);
}
