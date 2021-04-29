/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:27:53 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 14:38:37 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t srclen;
    size_t dstlen;
    size_t i;
    
    i = 0;
    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    if (dstsize > 0 && dstsize - 1 > dstlen)
    {
        while (src[i] && dstlen + i + 1 < dstsize)
        {
            dst[dstlen] = src[i];
            dstlen++;
            i++;
        }
    }
    else if (dstlen == dstsize || dstlen > dstsize)
        dstlen = dstsize;
    return (dstlen);
}
