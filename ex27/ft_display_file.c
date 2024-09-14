/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:14:07 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/23 15:10:45 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int	ft_check_args(int a)
{
	if (a == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (a != 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	int			file;
	char		buf[BUF_SIZE];
	ssize_t		totalread;

	if (ft_check_args(argc) == 1)
		return (1);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file != -1)
		{
			totalread = read(file, buf, BUF_SIZE - 1);
			while (totalread > 0)
			{
				buf[totalread] = '\0';
				write(1, &buf, totalread);
				totalread = read(file, buf, BUF_SIZE - 1);
			}
		}
		else
			write(1, "Cannot read file.\n", 18);
		close(file);
	}
	return (0);
}
