/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:26:12 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/12 18:26:17 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
// char f(unsigned int i, char s)
// {
// 	return s + 1 ;
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return(NULL);
	while (s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}
// int main()
// {
// 	char *s="abc";
// 	int i;

// 	printf("%s",ft_strmapi(s,&f));
// }