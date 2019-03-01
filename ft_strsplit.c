/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <bkjornra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:41:54 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/01 02:41:48 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char const *str, char c)
{
	int		j;

	j = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str == c)
			str++;
		j++;
	}
	return (j);
}

static	int		ft_word_stored(const char *str, int i, char **array, char c)
{
	int		len;
	int		space;

	len = 0;
	space = 0;
	while (*str == c)
	{
		str++;
		space++;
	}
	while (str[len] && str[len] != c)
		len++;
	if (len > 0)
	{
		array[i] = ft_strnew(len);
		ft_strncpy(array[i], (char *)str, len);
	}
	return (space + len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		length;
	char	**ret;
	int		i;
	int		num;

	i = 0;
	num = ft_count_words(s, c);
	if (!s)
		return (NULL);
	ret = (char **)ft_memalloc((num + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (*s)
	{
		length = ft_word_stored(s, i++, ret, c);
		s += length;
	}
	ret[num] = 0;
	return (ret);
}
