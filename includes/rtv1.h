/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 16:54:20 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/24 19:00:26 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "mlx.h"
# include "../libft/includes/libft.h"
# include <math.h>

/*
** defines pour les differents types de formes que je peux gerer
*/

# define PLAN 0
# define SPHERE 1
# define CONE 2
# define CYLINDRE 3

typedef struct	s_vec
{
	double		x;
	double		y;
	double		z;
}				t_vec;

typedef struct	s_param
{
	t_vec		pos;
	t_vec		vec;
	int			color;
	int			size;
	int			type;
}				t_param;

typedef struct	s_objs
{
	int				color;
	int				type;
	int				size;
	t_vec			pos;
	t_vec			vec;
	struct s_objs	*next;
}				t_objs;

typedef struct	s_scene
{
	t_objs		*objs;
	int			size;
}				t_scene;

t_objs			*add_objs(int color, int shape, int size, t_vec pos, t_vec vec);
t_objs			*sphere(int color, int size, t_vec pos, t_vec vec);
t_vec			vec_norme(t_vec vec);
t_vec			two_points_ray(t_vec a, t_vec b);

#endif
