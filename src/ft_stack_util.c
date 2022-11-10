/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/10 16:22:40 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_stack **a, t_stack **b)
{
	while (*a != NULL || *b != NULL)
	{
		if (*a != NULL && (*a)->content)
			ft_printf("%d", (*a)->content);
		else
			ft_printf("_");
		ft_printf("    ");
		if (*b != NULL && (*b)->content)
			ft_printf("%d\n", (*b)->content);
		else
			ft_printf("_\n");
		if (*a)
			*a = (*a)->next;
		if (*b)
			*b = (*b)->next;
	}
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*lst;

	lst = (t_stack *) malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

t_stack	*ft_stacklast(t_stack *lst)
{
	t_stack	*current;

	current = lst;
	while (current)
	{
		if (!current->next)
			return (current);
		current = current->next;
	}
	return (NULL);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst)
	{
		last = ft_stacklast(*lst);
		if (last)
		last->next = new;
	}
	else
		*lst = new;
}
