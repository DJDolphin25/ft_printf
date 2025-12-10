/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theoppon <theoppon@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 23:36:20 by theoppon          #+#    #+#             */
/*   Updated: 2025/12/10 22:00:27 by theoppon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_numbers(long n)
{
	int	count;

	count = 1;
	while (n > 15)
	{
		n /= 16;
		count++;
	}
	return (count);
}

static char	*conversion(char *str, int len, long num)
{
	while (len > 2)
	{
		if ((num % 16) < 10)
			str[len - 1] = (num % 16) + 48;
		else
			str[len - 1] = (num % 16) + 87;
		num /= 16;
		len--;
	}
	return (str);
}

int	print_memory(void *s)
{
	char		*str;
	int			len;
	int			res;
	long int	num;
	
	
	if (num < 0)
		num = -num;
	len = count_numbers(num);
	str = malloc(len + 3);
	if (!str)
		return (0);
	str[len] = '\0';
	str[0] = '0';
	str[1] = 'x';
	conversion(str + 2, len, num);
	res = print_string(str);
	free(str);
	return (res);
}
