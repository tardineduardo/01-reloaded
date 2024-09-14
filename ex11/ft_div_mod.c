/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:15:27 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/17 19:15:28 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	m;
	int	n;
	int i;
	int j;
	int	*div;
	int	*mod;

	m = 11;
	n = 4;
	div = &i;
	mod = &j;

	ft_div_mod(m, n, div, mod);
	printf("%d, %d, %d, %d", m, n, *div, *mod);
}
*/