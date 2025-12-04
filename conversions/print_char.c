/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtcions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:26:39 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/03 23:38:14 by theoppon         ###   ########.fr       */
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
