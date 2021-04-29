/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:39:01 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 14:10:51 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	int		*p;

	if (count == 0 || size == 0)
		return (NULL);
	i = 0;
	p = (int *)malloc(count * size);
	if (!p)
		return (NULL);
	while (i < count)
		p[i++] = 0;
	return (&p[0]);
}
