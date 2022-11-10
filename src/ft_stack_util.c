/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/10 15:55:01 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_list *a, t_list *b)
{
	t_list	*atmp;
	t_list	*btmp;

	atmp = a;
	btmp = b;
	while (atmp != NULL || btmp != NULL)
	{
		if (atmp != NULL && atmp->content)
			ft_printf("%d", (int) *((int *) atmp->content));
		else
			ft_printf("_");
		ft_printf("    ");
		if (btmp != NULL && btmp->content)
			ft_printf("%d\n", (int) *((int *) btmp->content));
		else
			ft_printf("_\n");
		if (atmp)
			atmp = atmp->next;
		if (btmp)
			btmp = btmp->next;
	}
}

void	ft_stack_add(t_list **a, int content)
{
	int	*c;

	c = malloc(sizeof(int));
	*c = content;
	ft_lstadd_back(a, ft_lstnew(c));
}
