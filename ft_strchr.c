/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:47:56 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 05:05:59 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return (((char *)s + i));
		i++;
	}
	return (NULL);
}
/*int main ()
{
	char s[] = "aaa";
	//printf("%s\n", ft_strchr(s, '3'));
	printf("%s\n", ft_strchr(s, (void *)0));
}
*/
