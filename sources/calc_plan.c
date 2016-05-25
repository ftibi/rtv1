/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_plan.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 17:47:21 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 17:57:29 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void	calc_plan(char *datastr, t_objs *obj, t_data *data)
{
	int		i;
	int		j;
	t_vec	pt;
	t_vec	ray;
	t_vec	cam;

	cam.x = SIZE / 2;
	cam.y = SIZE / 2;
	cam.z = -SIZE / 2;
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			pt.x = i;
			pt.y = j;
			pt.z = 0;
			ray = two_points_ray(cam, pt);
			if (sphere(obj, pt, ray))
				my_pixel_put_img(data->mlx, data->bpp, i, j, obj->color, datastr);
			j++;
		}
		i++;
	}
}
