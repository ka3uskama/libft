/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:26:51 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 17:34:50 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	*st;
	int i;

	i = 0;
	len = ft_strlen(s);
	st = (char *)s;
	while (i <= len)
	{
		if (st[i] == c)
			return (&st[i]);
		i++;
	}
	return (NULL);
}
