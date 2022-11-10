/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:31:00 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 05:14:10 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	int		len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main()
{
	char dst[9] = "g";
	char src[] = "there";

	printf("%zu\n", ft_strlcpy(dst, src, 5));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst, src, 5));
	printf("%s\n", dst);
}*/
