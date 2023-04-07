/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 23:13:14 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/28 23:13:36 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
    size_t      i;
    unsigned char *ptr;
    unsigned char cha;

    i = 0;
    ptr = (unsigned char *) b;
    cha = (unsigned char)c;
    
    while(i < len)
    {
        if (ptr[i] == cha)
                return((void *)(b + i));
        i++;
    }

    return(NULL);
}
