/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:09:48 by cmambwe           #+#    #+#             */
/*   Updated: 2019/10/03 19:09:49 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if ((s1 != NULL && s2 != NULL) && \
	(str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)))))
	{
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
