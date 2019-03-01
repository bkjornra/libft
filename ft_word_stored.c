/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_stored.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <bkjornra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 23:41:10 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/01 01:57:04 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_stored(const char *str, int i, char **ret, char c)
{
	int len;
	int space;

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
		ret[i] = ft_strnew(len);
		ft_strncpy(ret[i], str, len);
	}
	return (space + len);
}
