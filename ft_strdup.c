/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:16:18 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 14:38:02 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	count;
	size_t	size;
	int		i;
	char	*new;

	i = 0;
	count = 0;
	while (s1[count])
		count++;
	size = sizeof(s1[0]);
	if (size == 0 || count == 0)
		return (NULL);
	new = (char *)malloc(count * size);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	return (&new[0]);
}
