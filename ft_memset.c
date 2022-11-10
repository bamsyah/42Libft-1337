/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:27:37 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 02:52:36 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main ()
{
	char s[] = "hqdfhxhgxhk";
	int c = 'z';
	printf("%s\n", ft_memset(s, c, 3));
	printf("%s", memset(s, c, 3));
}*/
