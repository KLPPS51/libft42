/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:57:25 by mobullad          #+#    #+#             */
/*   Updated: 2024/11/05 15:15:45 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		k;

	i = 0;
	k = 0;
	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (s1[i] != '\0')
	{
		join[k] = s1[i];
		i++;
		k++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join[k] = s2[i];
		i++;
		k++;
	}
	join[k] = '\0';
	return (join);
}
/*#include <stdio.h>

int	main(void)
{
	const char *s1 = "Salut, ";
	const char *s2 = "ca va?";
	char *join = ft_strjoin(s1, s2);
	printf("Joined : %s\n", join);
	return (0);
}*/
