/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:47:19 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/11 22:05:12 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	
}
// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	size_t	first;
// 	size_t	last;

// 	first = 0;
// 	last = ft_strlen(s1);
// 	str = NULL;
// 	if(!s1 || !set)
// 		return(NULL);
// 	while(ft_strchr(set,s1[first]))
// 		first++;
// 	while(ft_strrchr(set,s1[last]) && first < last)
// 		last--;
// 	str = malloc(sizeof(char) * (last - first + 1));
// 	if(str)
// 		ft_strlcpy(str,s1 + first,(last - first + 1));
// 	return(str);
// }
int main()
{
	char *s="   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n";
	char *set=" \n\t";
	printf("%s",ft_strtrim(s,set));
}
