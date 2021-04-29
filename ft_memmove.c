/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:22:26 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 14:31:15 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;
	
	if (!dst && !src && !len)
		return (NULL);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (src < dst)
	{
		destination += len - 1;
		source += len - 1;
		while (len-- && destination && source)
			*(destination--) = *(source--);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
