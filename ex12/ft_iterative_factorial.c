/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:20:25 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/21 19:58:24 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	a;

	if (nb > 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	a = 2;
	factorial = 1;
	while (a <= nb)
	{
		factorial = factorial * a;
		a++;
	}
	return (factorial);
}
/*
int	main(void)
{
	int	a;

	printf("Type an integer: ");
	scanf("%d", &a);
	printf("%d", ft_iterative_factorial(a));
	return (0);
}
*/