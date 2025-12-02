/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 20:06:19 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/02 22:57:19 by theoppon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parser(va_list arguments, const char *format)
{
	int	chars;

	chars = 0;
	if (*format == 'c')
		chars = print_char(va_arg(arguments, int));
	else if (*format == 's')
		chars = print_string(va_arg(arguments, char *));
	/*else if (*format == 'p')
		chars = print_memory(va_arg(arguments, void *));
	else if (*format == 'd')
		chars = print_decimal(va_arg(arguments, int));
	else if (*format == 'i')
		chars = print_intenger(va_arg(arguments, signed int));
	else if (*format == 'u')
		chars = print_unsigned_decimal(va_arg(arguments, unsigned int));
	else if (*format == 'x')
		chars = print_hex_lowercase(va_arg(arguments, int));
	else if (*format == 'X')
		chars = print_hex_uppercase(va_arg(arguments, int));		
	else if (*format == '%')
		chars = print_char('%');*/
	return (chars);
}
