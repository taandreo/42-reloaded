/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:43:43 by tairribe          #+#    #+#             */
/*   Updated: 2022/05/21 17:39:25 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buffer;
	int	i;

	if (min >= max)
		return (NULL);
	if (max > 2147483647)
		return (NULL);
	buffer = malloc((max - min) * sizeof(int));
	if (!buffer)
		return (0);
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	return (buffer);
}
