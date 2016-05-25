/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 16:54:20 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 20:21:35 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "mlx.h"
# include "../libft/includes/libft.h"
# include <math.h>

# define SIZE 600

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

typedef struct	s_data
{
	void		*mlx;
	void		*img;
	char		*datastr;
	int			bpp;
	int			end;
	t_vec		cam;
}				t_data;

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

t_data			*data_init(void *mlx,void *img, char *datastr, int bpp, int end);

t_objs			*add_objs(int color, int type, int size, t_vec pos, t_vec vec, t_objs *objs);
t_vec			*sphere(t_objs *sphere, t_vec pt, t_vec ray);
t_vec			vec_normalize(t_vec vec);
double			vec_norme(t_vec vec);
t_vec			two_points_ray(t_vec a, t_vec b);
t_vec			two_points_ray_unnorm(t_vec a, t_vec b);
void			calc_plan(char *datastr, t_objs *obj, t_data *data);
int				premier_plan(t_vec *new, t_vec *ref, t_data *data);

double			produit_scalaire(t_vec a, t_vec b);
t_vec			sum_vec(t_vec a, t_vec b);
t_vec			sub_vec(t_vec a, t_vec b);
t_vec			vec_init(double x, double y, double z);

void			my_pixel_put_img(void *mlx, int bpp, int x, int y, int color, char *data);

/*
** MLX
*/

int				my_key_funct(int keycode);
int				mouse_pos(int x, int y);
int				my_mouse_funct(int button, int x, int y);

#endif
