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
	if (dst == src || !len)
		return (dst);
	if(src < dst)
		while(len)
		{
			*(unsigned char *) (dst + len - 1) = *(unsigned char *) (src + len - 1);
			len--;
		}
	else
		ft_memcpy(dst,src,len);
	return (dst);
}