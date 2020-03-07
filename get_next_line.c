/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:21:48 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/25 15:09:12 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*lst_making(const int fd, t_list **head)
{
	t_list *tmp;

	tmp = *head;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	if (tmp == 0)
		return (0);
	ft_lstadd(head, tmp);
	return (tmp);
}

int		gnl_read(const int fd, char **line)
{
	int		ret;
	char	tmp_str[BUFF_SIZE + 1];
	char	*tmp;

	while ((ret = read(fd, tmp_str, BUFF_SIZE)))
	{
		tmp_str[ret] = '\0';
		tmp = *line;
		*line = ft_strjoin(*line, tmp_str);
		if (*line == NULL)
			return (-1);
		free(tmp);
		if ((ft_strchr(tmp_str, '\n')))
			break ;
	}
	return (ret);
}

int		gnl_strcpy(char **line, char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	*line = ft_strnew(i);
	if (!*line)
		return (0);
	ft_strncpy(*line, str, i);
	return (i);
}

void	gnl_str_free(char *tmp_str)
{
	tmp_str[0] = '\0';
	free(tmp_str);
}

int		get_next_line(const int fd, char **line)
{
	int				buffer;
	char			*tmp_str;
	char			buf[BUFF_SIZE];
	static	t_list	*head;
	t_list			*tmp_lst;

	if (fd < 0 || BUFF_SIZE <= 0 || line == NULL ||
		(read(fd, buf, 0)) < 0 || !(tmp_lst = lst_making(fd, &head)))
		return (-1);
	if (!(gnl_read(fd, (char**)&(tmp_lst->content))) &&
		(!((char*)tmp_lst->content)[0] || (char*)tmp_lst->content == NULL))
		return (0);
	buffer = gnl_strcpy(line, (char*)tmp_lst->content);
	tmp_str = tmp_lst->content;
	if (tmp_str[buffer])
	{
		tmp_lst->content = ft_strdup(&tmp_str[buffer + 1]);
		gnl_str_free(tmp_str);
	}
	else
		gnl_str_free(tmp_str);
	return (1);
}
