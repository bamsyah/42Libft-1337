/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:47:32 by bamsyah           #+#    #+#             */
/*   Updated: 2022/11/10 04:49:21 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	t;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	t = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[t - 1] && ft_strchr(set, s1[t - 1]) && t > i)
		t--;
	str = ft_substr(s1, i, (t - i));
	return (str);
}
/*int main ()
{
	char s[] = "yassine";
	char set[] = "";
	printf("%s", ft_strtrim(s, set));
}*/
