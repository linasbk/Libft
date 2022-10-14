/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:18:08 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/09 13:21:47 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenght;
	size_t	i;

	lenght = ft_strlen(needle);
	i = 0;
	if (!haystack && !len)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		if ((len >= lenght) && ft_strncmp(haystack + i, needle, lenght) == 0)
			return ((char *)haystack + i);
		i++;
		len--;
	}
	return (0);
}
