/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_plan.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 17:47:21 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 20:31:54 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void	calc_plan(char *datastr, t_objs *obj, t_data *data)
{
	int		i;
	int		j;
	t_vec	pt;
	t_vec	ray;
	t_objs	*obj_tmp;
	t_vec	*aff;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			pt = vec_init(i, j, 0); // C'est ici que je dois inclure la pos du plan
									// de plus, la pos de la cam doit etre liee a celle du plan
			ray = two_points_ray(data->cam, pt);
			obj_tmp = obj;
			aff = 0;
			while (obj_tmp) //ici on va colorer l'image avec le dernier objet insere, on ne tient pas encore compte de la distance
			{
				if (!aff)
				{
					if (sphere(obj_tmp, pt, ray))
					{
						my_pixel_put_img(data->mlx, data->bpp, i, j, obj_tmp->color, datastr);
						aff = sphere(obj_tmp, pt, ray);
					}
				}
				else if (sphere(obj_tmp, pt, ray) && premier_plan(sphere(obj_tmp, pt, ray), aff, data))//je dois ecrire une focntion qui verifie que cam->mvxpt < cam->aff
					my_pixel_put_img(data->mlx, data->bpp, i, j, obj_tmp->color, datastr);
				obj_tmp = obj_tmp->next;
			}
			j++;
		}
		i++;
	}
}
