NAME = fractol

SRC_PATH = ./sources

SRC_NAME = add_objs.c calc_plan.c img_plan.c my_pixel_put_img.c sphere.c\
			two_points_ray.c vec_norme.c vectors.c key_fct.c data_init.c\
			premier_plan.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(SRC:.c=.o)

LIB = ./libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I./includes -I./libft/includes

MLXFLAGS = -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL -framework AppKit

all: $(LIB) $(NAME)

$(LIB):
	make -C ./libft
	cp $(LIB) libft.a

$(NAME): $(OBJ) $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(MLXFLAGS) libft.a


$(SRC_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	make clean -C ./libft
	rm -fv $(OBJ)

fclean: clean
	make fclean -C ./libft
	rm -fv $(NAME) libft.a

re: fclean all

.PHONY: all, clean, fclean, re, print, test

norme:
	norminette $(SRC) includes/fractol.h

test: $(LIB) $(OBJ)
	rm -fv test
	$(CC) -c -o  main.o main.c $(MLXFLAGS)
	$(CC) -o test  main.o $(OBJ) $(MLXFLAGS) libft.a
	./test

print: $(LIB)
	rm -fv print
	$(CC) -o print  $(SRC) $(CPPFLAGS) $(MLXFLAGS) libft.a
	./print
