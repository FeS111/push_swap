/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:35:36 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/12 15:06:48 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_stack_size(t_stack **stack)
{
	size_t	count;
	t_stack	*tmp;

	count = 0;
	tmp = *stack;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

t_stack	*ft_get_next_min(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index == -1 && (!has_min || tmp->content < min->content))
		{
			min = tmp;
			has_min = 1;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	ft_set_index(t_stack **stack)
{
	t_stack	*tmp;
	int		index;

	index = 0;
	tmp = ft_get_next_min(stack);
	while (tmp)
	{
		tmp->index = index++;
		tmp = ft_get_next_min(stack);
	}
}
