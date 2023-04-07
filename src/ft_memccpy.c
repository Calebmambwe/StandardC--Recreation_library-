/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:15:01 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/28 22:15:10 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t  i;

    unsigned char *dest;
    unsigned char *sorc;

    i = 0;
    dest = (unsigned char *)dst;
    sorc = (unsigned char *)src;

    while (i < n)
    {
        dest[i] = sorc[i];
        if (sorc[i] == (unsigned char)c)
            return(dst + i + 1);
        i++;
    }
    return(NULL);
}
