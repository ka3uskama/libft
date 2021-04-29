/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:03:17 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 17:33:36 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		if (src[i] == c)
		{
			return (&src[i]);
		}
		i++;
	}
	return (NULL);
}
