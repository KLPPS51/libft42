/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:02:20 by mobullad          #+#    #+#             */
/*   Updated: 2024/10/30 13:09:25 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	k;

	str = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == k)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
	char str[]="Hello\0World";
	char *result;

	result = (char *)ft_memchr(str, '\0', 11);
	printf("%s\n", result + 1);
	return(0);
}*/