/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liar13cajun <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:45:50 by liar13caj         #+#    #+#             */
/*   Updated: 2021/10/25 15:21:23 by liar13caj        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include "libft.h"

static int	ft_check_overflow(int num, int sign)
{
	unsigned int	nb;

	nb = num;
	if (nb > 2147483648 && sign)
		return (0);
	if (nb > 2147483647 && !sign)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	ret;

	num = 0;
	sign = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	ret = ft_check_overflow(num, sign);
	if (ret != 1)
		return (ret);
	if (sign)
		return (num *= -1);
	return (num);
}