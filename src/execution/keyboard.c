/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:47:24 by gfernand          #+#    #+#             */
/*   Updated: 2024/01/29 17:18:54 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3D.h"

static int	exkey(t_cub	*cub);
static int	keyb(int key, t_cub *cub);

void	window(t_cub *cub)
{
	mlx_hook(cub->win, 02, 1L << 0, &keyb, cub);
	mlx_hook(cub->win, 17, 1L < 17, &exkey, cub);
	mlx_loop(cub->mlx);
	mlx_destroy_window(cub->mlx, cub->win);
	free(cub->mlx);
}

static int	exkey(t_cub	*cub)
{
	mlx_destroy_window(cub->mlx, cub->win);
	cub->win = NULL;
	exit(1);
}

static int	keyb(int key, t_cub *cub)
{
	if (key == 53)
	{
		mlx_destroy_window(cub->mlx, cub->win);
		cub->win = NULL;
		exit(1);
	}
	return (0);
}
