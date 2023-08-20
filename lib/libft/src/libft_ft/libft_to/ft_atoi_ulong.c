/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ulong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:13:56 by sbhatta           #+#    #+#             */
/*   Updated: 2023/08/05 15:32:09 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "../../../include/libft.h"

static unsigned long	ft_atoi_ulong_sup(const char *str, int i)
{
	int					digit;
	unsigned long		result;

	digit = 0;
	result = 0;
	while ((char)str[i] != '\0')
	{
		if ((char)str[i] == '-' || (char)str[i] == '+')
			break ;
		else if (ft_isspace((char)str[i]) == 1)
			break ;
		else
		{
			if ((char)str[i] >= '0' && (char)str[i] <= '9')
				digit = (char)str[i] - '0';
			else
				break ;
			if (digit > 9)
				break ;
			result = 10 * result + digit;
			i++;
		}
	}
	return (result);
}

unsigned long	ft_atoi_ulong(const char *str)
{
	int					sign;
	unsigned long		result;
	int					i;

	sign = 0;
	result = 0;
	i = 0;
	while (ft_isspace((char)str[i]) == 1)
		i++;
	if ((char)str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if ((char)str[i] == '+')
	{
		sign = 0;
		i++;
	}
	result = ft_atoi_ulong_sup(str, i);
	if (sign == 1)
		return (-result);
	return (result);
}
