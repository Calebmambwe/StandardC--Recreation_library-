/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:45:14 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/21 17:45:21 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;

    i = 0;
    while(src[i] != '\0' && i < len)
    {
        dst[i] = src[i];
        i++;
    }
        dst[i] = '\0';
    return(dst);
}
