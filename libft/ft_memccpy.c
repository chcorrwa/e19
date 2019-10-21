/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcorrwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 06:39:59 by chcorrwa          #+#    #+#             */
/*   Updated: 2019/10/17 06:58:54 by chcorrwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (dst);
	index = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		if (s[index] == (unsigned char)c)
			return ((void *)dst + index + 1);
		index++;
	}
	return (NULL);
}
