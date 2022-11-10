/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:35 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/10 16:27:00 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// int argc, char **argv
int	main()
{
	t_stack *a = ft_stacknew(1);
	t_stack **b = malloc(sizeof(t_stack *));

	ft_stackadd_back(&a, ft_stacknew(2));
	ft_stackadd_back(&a, ft_stacknew(3));
	ft_stackadd_back(&a, ft_stacknew(4));
	ft_print_stacks(&a, b);
	return (0);
}
