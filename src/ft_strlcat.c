/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:18:40 by cmambwe           #+#    #+#             */
/*   Updated: 2019/09/22 15:18:43 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t ft_strlcat(char *restrict dest,const char *restrict src, size_t size)
// {
//   unsigned int l;
//   unsigned int i;
  
//   l = 0;
//   while(dest[l] != '\0')
//     l++;
//   i = 0;
//   while (i + l + 1 < size && src[i] != '\0')
//   {
//     dest[l + i] = src[i];
//     i++;
//   }
//   dest[l + i] = '\0';
//   i = 0;
//   while (src[i] != '\0')
//     i++;
//   if (size == 0)
//     return (i);
//   if(l < size)
//     return (l + i);
//   else
//     return (size + i);
// }
