/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:13:32 by gfernand          #+#    #+#             */
/*   Updated: 2024/01/23 16:31:55 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

void exit_code(char *s);
void	check_map(char *s);

int	main(int arg, char **argv)
{
	if (arg < 2)
		exit_code("Error: 2 arguments are spected\n");
	check_map(argv[1]);

}

void exit_code(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(2, (s + i), 1);
	exit(0);
}

void	check_map(char *s)
{
	int	i;
	int	fd;
	int	fd_dir;

	fd = open(s, O_RDONLY);
	if (fd < 0)
		exit_code("WRONG MAP\n");
	else
	{
		fd_dir = open(s, O_DIRECTORY);
		if (fd_dir != -1)
			exit_code("PATH IS A DIRECTORY\n");
		close(fd_dir);
	}
	i = ft_strlen(s) - 1;
	if (s[i] != 'b' || s[--i] != 'u' || s[--i] != 'c' || s[--i] != '.')
	{
		close(fd);
		exit_code("WRONG MAP: invalid format\n");
	}
	return ;
}