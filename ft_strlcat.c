/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:44:37 by mobullad          #+#    #+#             */
/*   Updated: 2024/10/29 16:08:16 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	if (!dest && size == 0)
		return (0);
	i = 0;
	k = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= k)
		return (size + j);
	while (k + i < size - 1 && src[i] != '\0')
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (j + k);
}
