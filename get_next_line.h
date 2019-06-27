/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:08:12 by gabrady           #+#    #+#             */
/*   Updated: 2019/04/08 15:26:38 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE  100
# define MAX_FD	4096 + 1

# include "./libft/libft.h"
# include <stdio.h>

int get_next_line(const int fd, char **line);

#endif
