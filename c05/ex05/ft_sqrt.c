/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:29:34 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/25 20:25:14 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
			{
				return (0);
			}
			n++;
		}
	}
	return (0);
}
