/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:22:03 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/30 11:42:31 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_RETRY_GET_NEXT_LINE_H
# define GET_NEXT_LINE_RETRY_GET_NEXT_LINE_H
# include "libft.h"
# include <stdlib.h>
# define BUFF_SIZE 11000

t_list	*lst_making(const int fd, t_list **head);
int		gnl_read(const int fd, char **line);
int		gnl_strcpy(char **line, char *str);
void	gnl_str_free(char *tmp_str);
int		get_next_line(const int fd, char **line);

#endif
