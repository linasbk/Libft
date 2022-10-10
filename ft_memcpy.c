/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:33:36 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/07 09:33:40 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void * dst, const void * src, size_t n)
{
	size_t 	i;

	i = 0;
	while( n > i)
	{
		*(unsigned char *) (dst +i) = *(unsigned char *) (src + i);
		i++;
	}
	return(dst);
}

