/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:39:19 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/18 17:15:44 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

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

void	ft_sort_params(int argc, char *argv[])
{
	int		n;
	int		count;
	char	*temp;

	count = 1;
	while (count == 1)
	{
		count = 0;
		n = 1;
		while (n < argc - 1)
		{
			if ((ft_strcmp(argv[n], argv[n + 1]) > 0))
			{
				temp = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = temp;
				count = 1;
			}
			n++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	ft_sort_params(argc, argv);
	a = 1;
	while (a != argc)
	{
		ft_putstr(argv[a]);
		ft_putstr("\n");
		a++;
	}
	return (0);
}
