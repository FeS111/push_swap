/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/11 14:35:30 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*lst;

	lst = (t_stack *) malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->index = -1;
	lst->next = NULL;
	return (lst);
}

t_stack	*ft_stacklast(t_stack **lst)
{
	t_stack	*current;

	if (!lst)
		return (NULL);
	current = *lst;
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

	if (!lst)
		return ;
	if (*lst)
	{
		last = ft_stacklast(lst);
		if (last)
			last->next = new;
	}
	else
		*lst = new;
}

t_stack	**ft_parse_arguments(int argc, char **args)
{
	t_stack	**stack;
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	stack = malloc(sizeof(t_stack *));
	if (!stack || argc < 2)
		exit(0);
	while (++i < argc)
	{
		tmp = ft_split(args[i], ' ');
		if (tmp == NULL)
			ft_exit(stack);
		j = -1;
		while (tmp[++j] != NULL)
		{
			if (is_num(tmp[j]))
				ft_stackadd_back(stack, ft_stacknew(ft_atoi(tmp[j])));
			else
				ft_exit(stack);
		}
		free_string_array(tmp);
	}
	return (stack);
}
