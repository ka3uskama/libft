/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:33:22 by casalaza          #+#    #+#             */
/*   Updated: 2021/04/28 14:24:44 by casalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t	i;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	
	while (i < n)
	{
		if (src1[i] == (unsigned char)c)
		{
			dst1[i] = src1[i];
			return(&dst1[i + 1]);
		}
		dst1[i] = src1[i];
		i++;
	}
	return(NULL);
}


// int main (void)
// {
//    // Массив источник данных
//    unsigned char src[15]="12345678990";

//    // Массив приемник данных
//    unsigned char dst[15]="";
//    unsigned char dst1[15]="";

//    // Копируем данные из массива src в массив dst
//    memccpy(dst, src,'5', 10);
//    ft_memccpy(dst1, src,'5', 10);

//    // Вывод массива dst на консоль
//    printf ("dst: %s\n",dst);
//    printf ("dst1: %s\n",dst1);

//    return 0;
// }
