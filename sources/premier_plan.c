/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premier_plan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 19:27:22 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 19:43:50 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

int	premier_plan(t_vec *new, t_vec *ref, t_data *data)
{
	if (vec_norme(two_points_ray(data->cam, *new)) <= vec_norme(two_points_ray(data->cam, *ref)))
		return (1);
	return (0);
}
