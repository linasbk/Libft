/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:27:38 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/09 12:27:40 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t    ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
    size_t    i;
    size_t    lensrc;
    size_t    lendst;
    size_t    value;

    i = 0;
    lensrc = ft_strlen(src);
    lendst = ft_strlen(dst);
    if(dstsize == 0)
        return (lensrc);
    else if (dstsize < lendst)
        value = lensrc + dstsize;
    else
        value = lensrc + lendst;
    while(src[i] && lendst + i < dstsize - 1)
    {
        dst[lendst + i] = src[i];
        i++;
    }
    dst[lendst + i] = '\0';
    return (value);
}
