/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eakyurek <eakyurek@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:46:10 by eakyurek           #+#    #+#             */
/*   Updated: 2024/10/27 14:59:05 by eakyurek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	leng;
	size_t	i;

	i = 0;
	leng = ft_strlen(dest);
	if (size - 1 > leng && size > 0)
	{
		while (src[i] && size - 1 > leng + i)
		{
			dest[i + leng] = src[i];
			i++;
		}
		dest[leng + i] = 0;
	}
	if (leng >= size)
		leng = size;
	return (leng + ft_strlen(src));
}
