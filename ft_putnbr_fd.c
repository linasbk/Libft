/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:12:49 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/10 12:12:51 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long long   num;
    char        c;

    num = n;
    if(num < 0)
    {
        num *= -1;
        ft_putchar_fd('-',fd);       
    }
    if(num / 10 != 0)
        ft_putnbr_fd(num / 10,fd);
    c = (num %10) + 48;
    ft_putchar_fd(c,fd);
}