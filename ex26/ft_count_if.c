/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:37:59 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/22 14:30:24 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	a;
	int	counter;

	a = 0;
	counter = 0;
	while (tab[a])
	{
		if ((*f)(tab[a]) == 1)
			counter++;
		a++;
	}
	return (counter);
}
// int	main(void)
// {
// 	int		(*f)(char*);
// 	char	*strings[5];

// 	f = ft_strlen;
// 	strings[0] = "hello";
// 	strings[1] = "i";
// 	strings[2] = "am ";
// 	strings[3] = "here";
// 	strings[4] = NULL;

// 	for (int i = 0; strings[i]; i++) {
// 		printf("Length of '%s' is %d\n", strings[i], f(strings[i]));
// 	}

// 	int count = ft_count_if(strings, f);
// 	printf("Number of strings with length 1: %d\n", count);

// 	return (0);
// }
