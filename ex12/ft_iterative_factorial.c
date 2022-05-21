/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:55:43 by tairribe          #+#    #+#             */
/*   Updated: 2022/05/21 03:56:33 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	t;

	t = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		t = t * nb;
		nb--;
	}
	return (t);
}
