/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:53:12 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:53:14 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

int		ft_exit(char dis)
{
	if (dis == 'u')
		ft_putendl("usage: fillit source_file");
	else if (dis == 'e')
		ft_putendl("error");
	exit(1);
}

t_conf	*ft_figurelist(char *str, char c)
{
	t_conf	*figure;
	int		i;
	char	**buf;
	int		ctr;

	i = 0;
	ctr = 0;
	buf = ft_strsplit(str, '\n');
	figure = (t_conf*)malloc(sizeof(t_conf));
	while (buf[i] != '\0')
	{
		if (buf[i][0] == '#' || buf[i][1] == '#' ||
			buf[i][2] == '#' || buf[i][3] == '#')
			ctr++;
		i++;
	}
	if ((figure->tetrimin = (char**)malloc(sizeof(char*) * ctr + 1)) == NULL)
		ft_exit('e');
	figure->tetrimin[ctr] = NULL;
	figure->letter = c;
	ft_allocate(figure, buf);
	ft_change(figure->tetrimin, c, figure);
	return (figure);
}

int		main(int ac, char **av)
{
	int			fd;
	char		c;
	char		buf[21];
	t_conf		*ptr;
	t_conf		*lst;

	c = 'A';
	if (ac != 2)
		ft_exit('u');
	if ((fd = open(av[1], O_RDONLY)) == 0)
		ft_exit('e');
	if ((ptr = (t_conf*)malloc(sizeof(t_conf))) == NULL)
		ft_exit('e');
	ft_checkstr(av[1]);
	lst = ptr;
	while (read(fd, buf, 20) != 0)
	{
		buf[20] = '\0';
		ptr->next = ft_figurelist(buf, c++);
		ptr = ptr->next;
		read(fd, buf, 1);
	}
	ft_map(lst->next, av[1]);
	return (0);
}
