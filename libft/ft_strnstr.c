/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:49:21 by mobullad          #+#    #+#             */
/*   Updated: 2024/10/30 17:31:04 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	k = 0;
	if (little[k] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[k] != '\0' && k < len)
	{
		i = 0;
		while (big[k + i] == little[i] && k < len)
		{
			if (little[i + 1] == '\0' && k + ft_strlen(little) <= len)
				return ((char *)&big[k]);
			i++;
		}
		k++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[]="";
	char str2[]="789";

	printf("%s\n", ft_strnstr(str, str2, 10));
	return(0);
}*/