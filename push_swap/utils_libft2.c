/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:06:30 by ataoufik          #+#    #+#             */
/*   Updated: 2024/02/15 09:11:38 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
static int	ft_cont_word(const char *str, char c)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			cont++;
		while (*str != c && *str)
			str++;
	}
	return (cont);
}

static char	**ft_strspil(char **str, char const *s, char c, int count)
{
	int	i;
	int	j;

	i = 0;
	while (count > i)
	{
		j = 0;
		while (s[j] != c && s[j])
			j++;
		str[i] = ft_substr(s, 0, j);
		if (!str[i])
		{
			while (i--)
				free(str[i]);
			free(str);
			return (0);
		}
		while (s[j] == c && s[j])
			j++;
		s = s + j;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (!s)
		return (NULL);
	words = ft_cont_word(s, c);
	str = (char **)malloc((words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s == c && *s)
		s++;
	str = ft_strspil(str, s, c, words);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	se;
	char			*p;

	if (!s)
		return (NULL);
	se = ft_strlen((char *)s);
	j = 0;
	i = start;
	if (start > se)
		return (ft_calloc(1, 1));
	if (len >= se - start)
		len = se - start;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (len--)
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}