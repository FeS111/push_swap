/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_util2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/11 15:40:24 by fschmid          ###   ########.fr       */
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


