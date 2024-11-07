/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:11:16 by mobullad          #+#    #+#             */
/*   Updated: 2024/10/29 17:26:05 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			k;

	i = 0;
	k = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == k)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == k)
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>

int	main (void)
{
	char str[50]="Bonjour";
	char chr[]="j";

	printf("%s\n", ft_strchr(str, *chr));
	return(0);
}*/