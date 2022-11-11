/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 17:56:37 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_stackget_last(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	ft_stack_has(t_stack **stack, int num)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->content == num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = *stack;
	while (tmp)
	{
		last = tmp;
		tmp = tmp->next;
		free(last);
	}
	free(stack);
}

t_stack	*ft_stackget_n(t_stack **stack, int n)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		if (i == n)
			return (tmp);
		i++;
	}
	return (NULL);
}