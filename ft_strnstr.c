/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:41:20 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/14 15:12:27 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (i < len && haystack[i])
	{
		y = 0;
		while (haystack[i + y] == needle[y] && haystack[i + y] && i + y < len)
			y++;
		if (needle[y] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
