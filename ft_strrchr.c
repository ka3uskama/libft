/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:16:16 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/23 19:16:17 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *st;
    int g;
    int status;
    int len;

    len = ft_strlen(s);
    i = 0;
    st = (char *)s;
    while (i <= len)
    {
        if (st[i] == c)
        {
            g = i;
            status = 1;
        }
        i++;
    }
    if (status == 1)
        return (&st[g]);
    else
        return (NULL);
}
