/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelehov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:12:18 by dmelehov          #+#    #+#             */
/*   Updated: 2017/02/13 19:36:45 by dmelehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 216
# define MAX_INT 2147483647

typedef	struct		s_line
{
	struct s_line	*next;
	char			*buff;
	char			*cache;
	int				rfd;
	char			*temp;
}					t_line;

int					get_next_line(int const fd, char **line);

#endif
