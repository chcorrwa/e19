/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcorrwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:47:12 by chcorrwa          #+#    #+#             */
/*   Updated: 2019/10/29 13:57:04 by chcorrwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int n;

	i = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return ((char *)haystack);
	while (i <= (int) (len-n))
	{
		if((haystack[0] == needle[0]) && (strncmp(haystack, needle, n) == 0))
			return (char *)haystack;
		haystack++;
	}
	return (NULL);
}
