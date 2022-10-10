/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:24:00 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/09 12:24:02 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_isalpha(int alph)
{
	if(!((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z')))
		return 0;
	return 1;
}

