/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:52:49 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/17 19:15:51 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*REDO TO MAKE MORE EFFICIENT*/

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	else if (nb < 0 || nb == 1)
		return (nb);
	else
	{
		a = 1;
		while (a < nb)
		{
			if (a * a == nb)
				return (a);
			else
				a++;
		}
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(218714521));
}
*/