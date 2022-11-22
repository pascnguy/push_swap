/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:24:18 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:12:28 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

size_t  ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_atoi(const char *str)
{
    int i;
    int res;
    int n;

    i = 0;
    res = 0;
    n = 1;
    while (str[i] <= 32)
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            n = -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * n);
}

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    
    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}

int ft_isdigit(int nb)
{
    if (nb >= '0' && nb <= '9')
        return (1);
    return (0);
}

int ft_isspace(char c)
{
    if (!c)
        return (0);
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
    return (0);
}
