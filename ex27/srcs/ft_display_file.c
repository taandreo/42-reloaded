/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 02:46:34 by tairribe          #+#    #+#             */
/*   Updated: 2022/05/28 02:49:25 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	write_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(2, &s[i], 1);
		i++;
	}
	write(2, "\n", 1);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		r;
	char	buffer[4096];

	if (argc < 2)
		return (write_error("File name missing."));
	if (argc > 2)
		return (write_error("Too many arguments."));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (write_error("Error opening file."));
	r = read(fd, buffer, 4096);
	while (r > 0)
	{
		buffer[r] = '\0';
		ft_putstr(buffer);
		r = read(fd, buffer, 4095);
	}
	if (r == -1)
		return (write_error("Error reading file."));
	close(fd);
}