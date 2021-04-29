/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:33:40 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/24 16:33:46 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char *sr1;
    char *sr2;
    size_t i;
    i = 0;
    sr1 = (char *)s1;
    sr2 = (char *)s2;
    while (i < n && sr2[i] && sr1[i])
    {
        if (sr1[i] != sr2[i])
            return (-1);
        i++;
    }
    return (0);
}
