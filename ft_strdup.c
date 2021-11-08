/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liar13cajun <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:27:36 by liar13caj         #+#    #+#             */
/*   Updated: 2021/10/25 15:30:49 by liar13caj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	str = (char *)malloc(sizeof(char) * l);
	while (i <= l)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
