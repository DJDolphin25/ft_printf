/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:19:37 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/03 23:53:49 by theoppon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		char_printed;
	int		advance;
	va_list		arguments;
	
	char_printed = 0;
	advance = 0;
	va_start (arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			char_printed = parser(arguments, format);
			format ++;
		}
		else
		{
			char_printed += print_char(*format);
			format++;
		}

	}
	va_end(arguments);
	return (char_printed);
}

#include <stdio.h>

int	main()
{
	ft_printf("%%\n");
	printf("%%\n");
	return (0);
}
