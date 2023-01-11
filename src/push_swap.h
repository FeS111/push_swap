/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:17:52 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/10 12:02:37 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft/src/libft.h"
# include <stdarg.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	sort_size_above_five(t_stack **a, t_stack **b);

void	chunk_sort(t_stack **a, t_stack **b, int chunk);

int		is_rev_sorted(t_stack **stack);

int		is_sorted(t_stack **stack);

void	ft_print_stacks(t_stack **a, t_stack **b);

void	sort_size_two(t_stack **a);

void	sort_size_three(t_stack **a, int max);

void	sort_size_five(t_stack **a, t_stack **b);

int		stack_pos(t_stack **stack, int max);

int		first_top(t_stack **a, int max);

void	sort_stack(t_stack **a, t_stack **b);

t_stack	*ft_stacknew(int content);

void	ft_stackadd_back(t_stack **lst, t_stack *new);

t_stack	*ft_stacklast(t_stack **lst);

t_stack	**ft_parse_arguments(int argc, char **args);

void	ft_swap_a(t_stack **stack);

void	ft_swap_b(t_stack **stack);

void	ft_swap_swap(t_stack **a, t_stack **b);

void	ft_stackadd_front(t_stack **lst, t_stack *new);

void	ft_push_a(t_stack **a, t_stack **b);

void	ft_push_b(t_stack **b, t_stack **a);

t_stack	*ft_stackget_last(t_stack **lst);

void	ft_rotate_a(t_stack **stack);

void	ft_rotate_b(t_stack **stack);

void	ft_rotate_rotate(t_stack **a, t_stack **b);

void	ft_reverse_rotate_a(t_stack **stack);

void	ft_reverse_rotate_b(t_stack **stack);

void	ft_reverse_rotate_rotate(t_stack **a, t_stack **b);

void	ft_free_stack(t_stack **stack);

int		ft_stack_has(t_stack **stack, int num);

size_t	ft_stack_size(t_stack **stack);

t_stack	*ft_stackget_n(t_stack **stack, int n);

void	ft_set_index(t_stack **stack);

void	ft_exit(t_stack **stack);
#endif