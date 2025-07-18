/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:23:58 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/17 20:38:40 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2) 
	{
		if (*s1 != *s2) 
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
