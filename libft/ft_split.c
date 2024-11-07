/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:40:15 by mobullad          #+#    #+#             */
/*   Updated: 2024/11/06 18:51:27 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			nb++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb);
}

void	*ft_free(char **str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
int	ft_split_norm(const char *s, char c, int *i, int *k, char **tab)
{
	int	j;

	j = 0;
	while (s[*i] && s[*i] == c)
			(*i)++;
		if (!s[*i])
			return(1);
		{
			j = *i;
			while (s[j] && s[j] != c)
				j++;
			tab[*k] = ft_substr(s, *i, j - *i);
			if (!tab[*k])
				return(0);
			(*k)++;
			*i = j;
		}
		return (1);
}
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	k = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (!ft_split_norm(s, c, &i, &k, tab))
			return (ft_free(tab));
	}
	return (tab[k] = NULL, tab);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "  J'ai  faim    ";
// 	char c = ' ';
// 	char **dfg = ft_split(s, c);
	
// 	printf("%d\n", ft_count_words(s, c));
// 	for (int i = 0; dfg[i]; i++)
// 		printf("%s\n", dfg[i]);
// 	return (0);
// }