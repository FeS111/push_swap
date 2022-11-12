/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:17:52 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/12 14:24:46 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "../printf/src/ft_printf.h"
# include <stdarg.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	ft_print_stacks(t_stack **a, t_stack **b);

t_stack	*ft_stacknew(int content);

void	ft_stackadd_back(t_stack **lst, t_stack *new);

t_stack	*ft_stacklast(t_stack *lst);

t_stack	**ft_parse_arguments(int argc, char **args);

void	ft_swap(t_stack **stack);

void	ft_stackadd_front(t_stack **lst, t_stack *new);

void	ft_push(t_stack **a, t_stack **b);

t_stack	*ft_stackget_last(t_stack **lst);

void	ft_rotate(t_stack **stack);

void	ft_reverse_rotate(t_stack **stack);

void	ft_free_stack(t_stack **stack);

int		ft_stack_has(t_stack **stack, int num);

size_t	ft_stack_size(t_stack **stack);

t_stack	*ft_stackget_n(t_stack **stack, int n);

void	ft_set_index(t_stack **stack);

void	ft_exit(t_stack **stack);
#endif