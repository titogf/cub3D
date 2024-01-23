/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:48:27 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/22 17:28:57 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*g;

	i = 0;
	g = (char *) s;
	while (i < n)
	{
		g[i] = '\0';
		i++;
	}
}