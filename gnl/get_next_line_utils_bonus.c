/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baouragh <baouragh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:27:58 by baouragh          #+#    #+#             */
/*   Updated: 2023/12/01 16:43:12 by baouragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (src > dst)
	{
		if (!destination && !source)
			return (NULL);
		if (destination == source)
			return (dst);
		while (len--)
			*destination++ = *source++;
		return (dst);
	}
	while (len != 0)
	{
		destination[len - 1] = source[len - 1];
		len--;
	}
	return ((void *)destination);
}

char	*ft_strdup(char *s1)
{
	char	*copy;
	size_t	lenth;

	if (!s1)
		return (ft_strdup(""));
	lenth = ft_strlen(s1);
	copy = (char *)malloc(lenth + 1);
	if (!copy)
	{
		return (NULL);
	}
	ft_memmove(copy, s1, lenth);
	copy[lenth] = '\0';
	return (copy);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new)
		return (NULL);
	ft_memmove(new, s1, ft_strlen(s1));
	ft_memmove(new + ft_strlen(s1), s2, ft_strlen(s2));
	new[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (new);
}
