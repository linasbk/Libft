/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:38:51 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/12 22:38:53 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        s[i] = f(i,s[i]);
        i++;
    }
}