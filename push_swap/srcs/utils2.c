/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascnguy <pascnguy@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:38:23 by pascnguy          #+#    #+#             */
/*   Updated: 2022/11/21 21:25:16 by pascnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/swap.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
}

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    if (s)
        while (s[i])
            ft_putchar_fd(s[i++], fd);
}

char	ft_strcpy(char *src)
{
	int	i;
	char *dest;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}