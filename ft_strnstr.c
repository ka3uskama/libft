/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:08:08 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/24 15:08:13 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    int g;
    int h;
    char *haystack1;
    char *needle1;
    g = 0;
    i = 0;
    
    haystack1 = (char *)haystack;
    needle1 = (char *)needle;
    while (haystack1[i] && len > 0)
    {
        if(haystack1[i] == needle1[g])
        {
            h = i;
            while (needle1[g] != '\0')
            {
                if (haystack1[i] != needle1[g])
                    break;
                i++;
                g++;
            }
            return(&haystack1[h]);
        }
        len--;
        i++;
    }
    return NULL;
}
