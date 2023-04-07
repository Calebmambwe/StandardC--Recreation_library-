/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 17:18:56 by cmambwe           #+#    #+#             */
/*   Updated: 2019/10/03 17:18:58 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
    unsigned char *ptr;
    size_t                  i;

    i = 0;
    ptr = (unsigned char *)malloc(size);
    if (!ptr)
            return(NULL);
    while (i < size)
    {
        ptr[i] = 0;
        i++;
    }
    return((void *)ptr);
}
