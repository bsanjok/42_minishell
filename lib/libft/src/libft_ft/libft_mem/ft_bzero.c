/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:46:04 by sbhatta           #+#    #+#             */
/*   Updated: 2023/06/15 14:11:22 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)s;
	while (i != (int)n)
	{
		ptr[i] = '\0';
		i++;
	}
}