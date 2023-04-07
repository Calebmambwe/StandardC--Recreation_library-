/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:42:59 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/28 22:43:01 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void   *ft_memmove(void *dst, const void *src, size_t len)
 {
     size_t i;

    unsigned char *pdst;
    unsigned char *psrc;

    pdst = (unsigned char *)dst;
    psrc = (unsigned char *)src;

    i = 0;

    if (pdst == psrc)
        return(pdst);
    else if (pdst < psrc)
        {
            while(i < len)
            {
                *(pdst + i) = *(psrc + i);
                i++;
            }
        }
    else
    { 
        while(len > 0)
        {
            len--;
             *(pdst + i) = *(psrc + i);
        }
    }
     return(pdst);
 }
