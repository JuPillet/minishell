/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manipulate_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpillet <jpillet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:43:48 by jpillet           #+#    #+#             */
/*   Updated: 2021/11/23 17:32:32 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_ribool	ft_close_fd(int *fd)
{
	if (*fd > 2)
		close(*fd);
	*fd = -2;
	return (T_FALSE);
}

t_ribool	ft_unlink_file(char *file)
{
	if (file && !(access(file, F_OK)))
		unlink(file);
	return (T_FALSE);
}
