/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:03:08 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/16 11:43:58 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

t_sort	*ft_sortnew(int nb)
{
	t_sort	*tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->nb = nb;
	tmp->index = 0;
	tmp->next = NULL;
	return (tmp);
}

t_sort	*ft_sortnew_index(int nb, int index)
{
	t_sort	*tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->nb = nb;
	tmp->index = index;
	tmp->next = NULL;
	return (tmp);
}

void	ft_sortadd_front(t_sort **asort, t_sort *new)
{
	if (asort && new)
	{
		new->next = *asort;
		*asort = new;
	}
}

void	ft_sortadd_back(t_sort **asort, t_sort *new)
{
	t_sort	*tmp;

	tmp = *asort;
	if (!tmp)
		*asort = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
