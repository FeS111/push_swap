/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:29:27 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/06 16:48:22 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stack_size(a) == 2)
		sort_size_two(a);
	else if (ft_stack_size(a) == 3)
		sort_size_three(a, ft_stack_size(a) - 1);
	else if (ft_stack_size(a) <= 5)
		sort_size_five(a, b);
	else if (ft_stack_size > 5)
		// TODO
}

