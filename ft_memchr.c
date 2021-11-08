/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liar13cajun <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:28:11 by liar13caj         #+#    #+#             */
/*   Updated: 2021/10/25 15:25:34 by liar13caj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ((char *)s);
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
