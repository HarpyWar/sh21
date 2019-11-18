/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:49:49 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:26:26 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

static void			strdel(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
}

static int			clear_fddata(const int fd, size_t *fdtab)
{
	ft_lstdel(&(((t_fddata*)fdtab[fd])->line), &strdel);
	ft_memdel(&(((void*)fdtab)[fd]));
	return (-1);
}

static int			read_line(const int fd, size_t *fdtab, t_fddata *item,
	char **line)
{
	size_t			len;
	char			*line_chunk;
	int				is_nl;

	while ((len = ft_next_word(item->buf, &item->pos, '\n', 1)) > 0)
	{
		if (!(line_chunk = ft_strsub(item->buf, (unsigned int)item->pos, len)))
			return (clear_fddata(fd, fdtab));
		is_nl = line_chunk[0] == '\n';
		if (!is_nl)
			ft_lstaddback(&(item->line), ft_lstnew(line_chunk, len + 1));
		item->pos += len;
		ft_strdel(&line_chunk);
		if (is_nl)
		{
			*line = lst2str(((t_fddata*)fdtab[fd])->line);
			ft_lstdel(&(((t_fddata*)fdtab[fd])->line), &strdel);
			if (!(*line))
				return (clear_fddata(fd, fdtab));
			return (1);
		}
	}
	return (0);
}

static int			read_next(const int fd, size_t *fdtab, t_fddata *item,
	char **line)
{
	int				result;

	while (1)
	{
		if (item->pos == 0)
		{
			if ((item->buf_len = read(fd, item->buf, BUFF_SIZE)) < 0)
				return (-1);
			else if (item->buf_len == 0)
				break ;
			item->buf[item->buf_len] = '\0';
		}
		if ((result = read_line(fd, fdtab, item, line)) != 0)
			return (result);
		item->pos = 0;
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static size_t	fdtab[MAX_OPEN_FILES];
	t_fddata		*item;
	int				result;

	if (fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (fdtab[fd] == 0)
	{
		item = (t_fddata*)ft_memalloc(sizeof(*item));
		fdtab[fd] = (size_t)item;
	}
	else
		item = (t_fddata*)fdtab[fd];
	if ((result = read_next(fd, fdtab, item, line)) != 0)
		return (result);
	if (ft_lstsize(((t_fddata*)fdtab[fd])->line) > 0)
	{
		*line = lst2str(((t_fddata*)fdtab[fd])->line);
		ft_lstdel(&(((t_fddata*)fdtab[fd])->line), &strdel);
		if (*line == NULL)
			return (clear_fddata(fd, fdtab));
		return (1);
	}
	return (0);
}
