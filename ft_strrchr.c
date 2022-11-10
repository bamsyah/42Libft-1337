/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:05:50 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 05:08:32 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i++);
		i--;
	}
	return (0);
}
/*int main ()
{
	char s[] = "1337";
	//printf("%s\n", ft_strrchr(s, '3'));
	printf("%s", strrchr(s, '3'));

}*/
