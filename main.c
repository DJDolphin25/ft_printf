/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:19:37 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/02 19:56:14 by theoppon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

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
			advance = parser(arguments, format)
			format += advance;
		}
		else if
			char_printed += print_char(*format);
			format++;

	}
	va_end(arguments);
	return (char_printed);
}

int	main()
{
	ft_printf("%s", "Hola");
	return (0)
}
