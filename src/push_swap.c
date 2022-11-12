/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:35 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/12 15:02:19 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_stack **stack)
{
	ft_putstr_fd("Error\n", 2);
	ft_free_stack(stack);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_stack **a = ft_parse_arguments(argc, argv);

	ft_set_index(a);
	t_stack **b = malloc(sizeof(t_stack *));
	ft_printf("Stack size is: %d\n", ft_stack_size(a));

	ft_print_stacks(a, b);

	ft_printf("swapped a\n");
	ft_swap(a);
	ft_print_stacks(a, b);

	ft_printf("push b\n");
	ft_push(b, a);
	ft_print_stacks(a, b);

	ft_printf("push a\n");
	ft_push(a, b);
	ft_print_stacks(a, b);

	ft_printf("rotate a\n");
	ft_rotate(a);
	ft_print_stacks(a, b);

	ft_printf("reverse rotate a\n");
	ft_reverse_rotate(a);
	ft_print_stacks(a, b);

	ft_free_stack(a);
	ft_free_stack(b);
	
	return (0);
}
