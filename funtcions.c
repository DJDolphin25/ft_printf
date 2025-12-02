/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtcions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:26:39 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/02 23:08:52 by theoppon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	int	counter;

	counter = 0;
	write(1, &c, 1);
	counter++;
	return (counter);
}

int	print_string(char *c)
{
	int	counter;

	counter = 0;
	if(!c)
		return(print_string("(null)"));
	while (*c)
	{
		write(1, c++, 1);
		counter++;
	}
	return (counter);
}
