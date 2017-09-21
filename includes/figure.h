/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 20:05:41 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 20:05:45 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURE_H
# define FIGURE_H

# include <fcntl.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_conf
{
	char			**tetrimin;
	char			letter;
	int				a[2];
	int				b[2];
	int				c[2];
	int				d[2];
	int				*ptr;
	struct s_conf	*next;
}					t_conf;

int					ft_with(char **matrix, int len1);
void				ft_allocate(t_conf *figure, char **matrix);
int					ft_validate(char **buff);
int					ft_exit(char dis);
void				ft_checkstr(char *name);
void				ft_allocate(t_conf *figure, char **m);
void				ft_map(t_conf *fig, char *file);
char				**ft_createmap(char *str, char **map);
void				ft_change(char	**fig, int c, t_conf *figure);
int					ft_solver(t_conf *frst, char **map);
char				**ft_newmap(char **map, int area);
char				**ft_clean(char **map, int area);
void				ft_remove(char **map, t_conf *current);
void				ft_include(char **figure, int len1, int len2, int index);
void				ft_change(char	**fig, int c, t_conf *figure);
void				ft_coords(t_conf *fig);
void				ft_input(int i, int j, int order, t_conf *fig);

#endif
