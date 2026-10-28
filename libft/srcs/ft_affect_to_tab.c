/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affect_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <akotzky@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:42:00 by akotzky           #+#    #+#             */
/*   Updated: 2021/11/23 17:31:47 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_affect_to_tab_2(void ***array, ...)
{
	va_list	alist;

	va_start(alist, array);
	while (**array)
	{
		**array = va_arg(alist, char *);
		(**array)++;
	}
	va_end(alist);
}
