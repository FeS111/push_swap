/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 17:50:35 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_stack **a, t_stack **b)
{
	t_stack	*atmp;
	t_stack	*btmp;

	atmp = *a;
	btmp = *b;
	while (atmp != NULL || btmp != NULL)
	{
		if (atmp != NULL && atmp->content)
			ft_printf("%d", atmp->content);
		else
			ft_printf(".");
		ft_printf("    ");
		if (btmp != NULL && btmp->content)
			ft_printf("%d\n", btmp->content);
		else
			ft_printf(".\n");
		if (atmp)
			atmp = atmp->next;
		if (btmp)
			btmp = btmp->next;
	}
	ft_printf("_    _\na    b\n");
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

size_t	ft_stack_size(t_stack **stack)
{
	size_t	count;
	t_stack	*tmp;

	count = 0;
	tmp = *stack;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
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
		if (!ft_atoi(args[i]) || ft_stack_has(stack, ft_atoi(args[i])))
			return (NULL);
		if (!(*stack))
			*stack = ft_stacknew(ft_atoi(args[i]));
		else
			ft_stackadd_back(stack, ft_stacknew(ft_atoi(args[i])));
		i++;
	}
	return (stack);
}
