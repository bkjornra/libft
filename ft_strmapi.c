/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <bkjornra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:39:14 by bkjornra          #+#    #+#             */
/*   Updated: 2019/02/28 18:45:10 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_strnew(strlen(s));
	if (!result)
		return (NULL);
	ft_strcpy(result, s);
	i = -1;
	while (*(result + ++i))
	{
		*(result + i) = f(i, *(result + i));
	}
	return (result);
}
