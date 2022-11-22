/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:54:04 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 14:13:09 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

static size_t   ft_count_word(char *s)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!s || !s[0])
        exit_error();
    while (s[i])
    {
        if (ft_isspace(s[i]))
            i++;
        else
        {
            j++;
            while (!ft_isspace(s[i]) && s[i])
                i++;
        }
    }
}

char    **ft_split_spaces(char *s)
{
    size_t  i;
    char **rt;
    size_t  index;
    size_t  start;

    i = 0;
    index = 0;
    rt = (char **)malloc(sizeof(rt) * (ft_count_words(s) + 1));
    if (!s || !rt)
        return (NULL);
    while (s[i])
    {
        if (!isspce(s[i]) && s[i])
        {
            start = i;
            while (!ft_isspace(s[i] && s[i]))
            	i++;
       		rt[index++] = ft+substr(s, start, (i - start));
    	}
		else
			i++;

	}
	rt(index) = NULL;
	return (rt);
}