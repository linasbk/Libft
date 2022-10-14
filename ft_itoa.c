/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:29:18 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/11 18:29:23 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_lenstring(int s)
{
	int	i;

	i = 0;
	if (s <= 0)
		i++;
	while (s)
	{
		s /= 10;
		i++;
	}
	return (i);
}

static char	ft_array(char *ptr, long long nbr, int len)
{
	while (nbr)
	{
		len--;
		*(ptr + len) = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long long	nbr;
	int			len;

	ptr = NULL;
	nbr = n;
	len = ft_lenstring(nbr);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr)
	{
		if (nbr == 0)
			*ptr = '0';
		if (nbr < 0)
		{
			nbr *= -1;
			*ptr = '-';
		}
		*(ptr + len) = '\0';
		nbr = ft_array(ptr, nbr, len);
	}
	return (ptr);
}
