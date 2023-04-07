/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 01:45:49 by cmambwe           #+#    #+#             */
/*   Updated: 2019/10/02 01:45:51 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str1)
{
    char *strdup;
    int i;

    i = 0;
    strdup = (char *)malloc(sizeof(char)*(ft_strlen(str1) + 1));

    if (strdup == 0)
        return(NULL);
    while(str1[i] != '\0')
    {
        strdup[i] = str1[i];
        i++;
    }

    strdup[i] = '\0';
    return(strdup);
}
