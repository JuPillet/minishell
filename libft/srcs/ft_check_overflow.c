/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpillet <jpillet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:11:00 by jpillet           #+#    #+#             */
/*   Updated: 2021/12/01 15:13:18 by jpillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_ribool	ft_long_overflow(const char *src)
{
	long	num;
	char	*ltoa;
	int		ret_val;
	char	*val_trim;

	num = ft_atol(src);
	ltoa = ft_ltoa(num);
	val_trim = ft_strtrim(src, " ");
	ret_val = ft_strcmp(val_trim, ltoa);
	free(ltoa);
	free(val_trim);
	if (!ret_val)
		return (T_FALSE);
	return (T_TRUE);
}
