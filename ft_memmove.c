/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:07:09 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 05:29:06 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (src < dst)
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return (dst);
}
/*int main ()
{
	char d[] = "badr13";
	char s[] = "lfytkdrcykcl";
	//printf("%s\n", ft_memmove(s+1, s, 3));
	printf("%s", memmove(d, s, 5));
}*/
