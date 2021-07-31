/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitaly <vitaly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:54:20 by dwinky            #+#    #+#             */
/*   Updated: 2021/08/01 01:32:34 by vitaly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	size_t	j;
	char	*sub_str;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return ((char *)ft_calloc(1, sizeof(char)));
	sub_str = (char *)ft_calloc((ft_strlen(s) - start + 1), sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	k = start;
	j = 0;
	while (k != start + len && s[k])
	{
		sub_str[j] = s[k];
		j++;
		k++;
	}
	return (sub_str);
}
