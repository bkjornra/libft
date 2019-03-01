/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <bkjornra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:28:29 by bkjornra          #+#    #+#             */
/*   Updated: 2019/02/27 15:50:32 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_source;

	ptr_dest = (unsigned char*)dest;
	ptr_source = (unsigned char*)source;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_source[i];
		if (ptr_dest[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		++i;
	}
	return (NULL);
}
