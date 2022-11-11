/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 13:03:01 by fschmid          ###   ########.fr       */
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

t_stack	**ft_parse_arguments(int argc, char **args)
{
	t_stack	**stack;
	int		i;

	i = 0;
	stack = malloc(sizeof(t_stack *));
	if (argc == 2)
		args = ft_split(args[1], ' ');
	else
		i++;
	while (args[i] != '\0')
	{
		if (!ft_atoi(args[i]))
			return (NULL);
		if (!(*stack))
		{
			*stack = ft_stacknew(ft_atoi(args[i]));
		}
		else
		{
			ft_stackadd_back(stack, ft_stacknew(ft_atoi(args[i])));
		}
		i++;
	}
	return (stack);
}
