/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:49:33 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/28 21:49:34 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t      i;
    unsigned char *destination;
    unsigned char *source;

    i = 0;
    destination = (unsigned char *)dst;
    source = (unsigned char *)src;

    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }

    return (destination);
}
