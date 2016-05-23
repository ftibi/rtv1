/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:55:31 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/11 15:25:36 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 2

typedef struct		s_stock
{
	char			*str;
	int				fd;
	int				status;
	struct s_stock	*next;
}					t_stock;
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *s1, char const *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strrchr(char const *str, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char(*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
size_t				ft_strlen(char const *str);
void				ft_putnbr(int n);
void				ft_putendl(char const *s);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strcpy(char *dst, char const *src);
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				**ft_strsplit(char const *s, char c);
char				*ft_strdup(char const *s1);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
void				ft_bzero(void *s, size_t n);
size_t				ft_strlcat(char *s1, const char *s2, size_t n);
char				*ft_strncat(char *s1, const char *s2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
t_list				*ft_lststrsplit(char const *str, char c);
void				ft_lstprint(t_list *lst);
void				ft_lstaddend(t_list **alst, t_list *new);
void				ft_lstdelfirst(t_list **begin, void (*del)(void *, size_t));
void				ft_lstdellast(t_list **begin, void (*del)(void *, size_t));
int					ft_lstfold(t_list *lst, int (*f)(void *, void *));
void				ft_lstdelcmp(t_list **begin, void (*del)(void *, size_t),
						int(cmp)(void *));
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strend(char *str);
int					ft_pow(int x, int n);
char				*ft_itoa_base(int nbr, unsigned int base);
char				*ft_uitoa_base(unsigned long long nbr, unsigned int base);
char				*ft_uitoa_basemaj(unsigned long long nbr,
						unsigned int base);
char				*ft_litoa_base(long long nbr, unsigned int base);
unsigned long long	ft_ulpow(unsigned long long nb, int base);
unsigned long		ft_atoi_base(char *str, int base);
int					get_next_line(int const fd, char **line);
void				ft_putnbendl(int nb);
#endif
