/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 08:53:59 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/15 23:10:47 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void	find_index(t_data *data)
{
	int		i;
	t_sort	*sort;
	t_sort	*sort_cpy;

	sort = data->top_sort_a;
	while (sort)
	{
		i = 0;
		sort_cpy = data->top_sort_a;
		while (sort_cpy)
		{
			if (sort->nb > sort_cpy->nb)
				i++;
			sort_cpy = sort_cpy->next;
		}
		sort->index = i;
		sort = sort->next;
	}
}
