/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:54:54 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/10 09:56:18 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *str;
    size_t i;
    size_t sizelen;
    size_t newlen;

    i = 0;
    
    
    if(!s)
        return(0);
        sizelen = ft_strlen(s + start);
    if(start >= ft_strlen(s) || !len)
        return(ft_strdup(""));
    if(sizelen <= len)
    {
        str = malloc(sizeof(char) * (sizelen + 1));
        newlen = sizelen;
    }
    else
    {
        str = malloc(sizeof(char) * (len + 1));
        newlen = len;
    }
    if(!str)
        return(0);
    while(i < newlen)
    {
        *(str + i) = *(s + i + start);
        i++;
    }
    *(str + i) = '\0';
    return (str);
}
// int main()
// {
//     char *s="hello world";
//     printf("%s",ft_substr(s,9,5));
// }