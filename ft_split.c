o/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:05:31 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/11 22:09:47 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int get_num_word(char *s, char sep)
{
	int count;
	int	i;
	int new_word;

	count = 0;
	new_word = 1:
	i = 0;
	while (s[i])
	{
		if(s[i] == sep )
			new_word = 1;
		if(s[i] != sep && new_word)
			{
				count++;
				new_word = 0;
			}
		i++;
	}
	return (count);
}

char	get_word(char *s, char c)
{
	int		i;
	int		k;
	int		j;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while(s[i])
		i++;
	k = i;	
	while (k < i)
	{
		word[len] = s[k];
		len++;
		k++;
	}
	word[len] = '/0';
	j = i;
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **str;
	int	full_len;

	full_len = get_num_word(s,c);
	str = malloc(sizeof(char *) * (full_len + 1));
	while (i < full_len)
	{
		str[i] = get_word(s,c);
		// if ()
		i++;
	}
	str[i] = 0;
	return (**s);
}
