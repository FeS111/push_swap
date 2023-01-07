/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:29:27 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/07 15:11:47 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_size_above_five(t_stack **a, t_stack **b)
{	

}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stack_size(a) == 2)
		sort_size_two(a);
	else if (ft_stack_size(a) == 3)
		sort_size_three(a, ft_stack_size(a) - 1);
	else if (ft_stack_size(a) <= 5)
		sort_size_five(a, b);
	else if (ft_stack_size(a) > 5)
		sort_size_above_five(a, b);
}
