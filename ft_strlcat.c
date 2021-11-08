/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liar13cajun <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:16:31 by liar13caj         #+#    #+#             */
/*   Updated: 2021/10/25 15:36:46 by liar13caj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	get_len(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	destlen = get_len(dest);
	srclen = get_len(src);
	if (size == 0)
	{
		return (srclen);
	}
	while (src[i] != '\0' && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	if (destlen < size)
		return (destlen + srclen);
	return (size + srclen);
}
