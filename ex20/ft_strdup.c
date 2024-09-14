/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:39:27 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/18 12:50:17 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*start_of_dup;
	int		len;

	len = ft_strlen(src);
	dup = malloc(len * sizeof(char) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	start_of_dup = dup;
	while (*src)
	{
		*dup = *src;
		src++;
		dup++;
	}
	*dup = '\0';
	return (start_of_dup);
}
