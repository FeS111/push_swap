/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:35 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/11 14:35:55 by fschmid          ###   ########.fr       */
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
	t_stack	**a;
	t_stack	**b;

	a = ft_parse_arguments(argc, argv);
	b = (t_stack **) malloc(sizeof(t_stack *));
	*b = NULL;
	ft_set_index(a);
	sort_stack(a, b);
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
