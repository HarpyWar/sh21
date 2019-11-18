/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:49:49 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:25:29 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include "fcntl.h"
# include "limits.h"

# define BUFF_SIZE 1
# define MAX_OPEN_FILES INT_MAX

int						get_next_line(const int fd, char **line);

typedef struct			s_fddata
{
	char				buf[BUFF_SIZE + 1];
	t_list				*line;
	size_t				pos;
	ssize_t				buf_len;
}						t_fddata;

#endif
