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
    size_t  lenght;

    lenght = ft_strlen(needle);
if (*needle == '\0')
		return ((char *)haystack);
	while (len--)
	{
		if ((*haystack == *needle) && (len > lenght) && !ft_strncmp(haystack,needle,lenght))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
