/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:31:08 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/08 11:57:22 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srce;

	dest = dst;
	srce = src;
	if (dest == srce || !len)
		return (dest);
	if (srce < dest)
		while (len--)
			*(dest + len) = *(srce + len);
	else
		ft_memcpy(dest, srce, len);
	return (dest);
}
