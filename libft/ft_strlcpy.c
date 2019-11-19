/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcorrwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 15:23:55 by chcorrwa          #+#    #+#             */
/*   Updated: 2019/11/15 08:34:39 by chcorrwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*a;
	const char	*s;
	size_t		i;

	d = dst;
	a = dst + size;
	s = src;
	i = 0;
	while (*s != '\0' && d < a)
		*d++ = *s++;
	if (d < a)
		*d = 0;
	else if (size < i)
		d[-1] = i;
	while (*s != '\0')
		s++;
	return (s - src);
}
