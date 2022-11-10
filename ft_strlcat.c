/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:07:54 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 04:57:55 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	if (!dstsize || !src)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if ((dst == 0 && dstsize == 0) || dstsize < dstlen)
		return (dstsize + srclen);
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = (char )src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
/*int main ()
{
	char s[]= "abcd";
	char d[12]= "ll";
	printf("%lu\n", ft_strlcat(d, s, 12));
	//printf("%lu\n", strlcat(d, s, 0));
	printf("%s", d);
}*/
