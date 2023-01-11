/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:29:27 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/10 12:01:48 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_size_above_five(t_stack **a, t_stack **b)
{
	if (ft_stack_size(a) <= 25)
		chunk_sort(a, b, 1);
	else if (ft_stack_size(a) <= 50)
		chunk_sort(a, b, 2);
	else if (ft_stack_size(a) <= 100)
		chunk_sort(a, b, 4);
	else if (ft_stack_size(a) <= 500)
		chunk_sort(a, b, 8);
	else if (ft_stack_size(a) <= 1000)
		chunk_sort(a, b, 12);
	else
		chunk_sort(a, b, 18);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stack_size(a) == 2)
		sort_size_two(a);
	else if (ft_stack_size(a) == 3)
		sort_size_three(a, ft_stack_size(a) - 1);
	else if (ft_stack_size(a) <= 5)
		sort_size_five(a, b);
	else
		sort_size_above_five(a, b);
}
