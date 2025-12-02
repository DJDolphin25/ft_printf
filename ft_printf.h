#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	parser(va_list arguments, const char *format);
int	print_char(int c);
int	print_string(char *c);

#endif
