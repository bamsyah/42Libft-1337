/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:01:01 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/08 05:37:09 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void const *dst, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	*dd;

	i = 0;
	ss = (unsigned char *)src;
	dd = (unsigned char *)dst;
	if (!ss && !dd)
		return (NULL);
	if (ss == dd)
		return (ss);
	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
// int main ()
// {
//     // char s[] = "1337";
//     // char d[] = "1337";
//     printf("%s\n", ft_memcpy(NULL, NULL, 4));
//     //printf("%s", memcpy(d, s, 4));
// }
