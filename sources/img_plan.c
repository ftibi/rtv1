/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_plan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 17:20:45 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 17:28:12 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

char	**img_plan(void)
{
	char	**plan;
	int		i;

	if (!(plan = (char**)ft_memalloc(sizeof(char*) * SIZE + 1)))
		return (0);
	i = 0;
	while (i < SIZE)
	{
		if (!(plan[i] = (char*)ft_memalloc(SIZE + 1)))
			return (0);
		i++;
	}
	return (plan);
}
