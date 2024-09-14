/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:24:50 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/18 13:28:39 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	c = &a;
	d = &b;
	a = 2;
	b = 5;
	printf("a is %d, b is %d", a, b);
	ft_swap(c, d);
	printf("\na is %d, b is %d", a, b);
}
*/