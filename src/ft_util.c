/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:15:42 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/02 12:33:29 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_string_array(char **tmp)
{
	int	i;

	i = -1;
	while (tmp[++i] != NULL)
		free(tmp[i]);
	free(tmp);
}

int	is_num(char *tmp)
{
	int	i;

	i = -1;
	while (tmp[++i] != '\0')
		if (!ft_isdigit(tmp[i]))
			return (0);
	return (1);
}
