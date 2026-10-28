/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_expansion_quote.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpillet <jpillet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:32:38 by jpillet           #+#    #+#             */
/*   Updated: 2021/11/26 19:32:40 by jpillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"
#include "../incls/minishell.h"

void	ms_expend_copy_single_quote(char **enter, char **expanded)
{
	*((*expanded)++) = *((*enter)++);
	while (*(*enter) && *(*enter) != '\'')
		*((*expanded)++) = *((*enter)++);
	if (*(*enter) && *(*enter) == '\'')
		*((*expanded)++) = *((*enter)++);
}

void	ms_expend_mllc_single_quote(char **enter, int *len)
{
	(*enter)++;
	while (*(*enter) && *(*enter) != '\'' && ++len)
		(*enter)++;
	if (*(*enter) && *(*enter) == '\'')
		(*enter)++;
}
