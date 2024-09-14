/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:39:30 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/19 15:02:59 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	len;
	int	*array;

	if ((min > max) || (min == max))
	{
		array = NULL;
		return (array);
	}
	else
	{
		len = max - min;
		array = malloc(len * sizeof(int));
		if (array == NULL)
			return (array);
		a = 0;
		while (a < len)
		{
			array[a] = min;
			min++;
			a++;
		}
		return (array);
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*c;

	a = 5;
	b = 10;
	c = ft_range(a, b);
}
*/
