/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:24:37 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/22 21:20:20 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_word_count(char const *s, char c)
{
	int	wc;
	int	i;
	int	find_word;

	wc = 0;
	i = 0;
	find_word = 0;
	while (s[i])
	{
		if (s[i] == c && find_word)
		{
			find_word = 0;
			wc += 1;
		}
		else if (s[i] != c)
			find_word = 1;
		i++;
	}
	return (wc + find_word);
}

static char	*_str_from_word(char const **p_str, char c)
{
	char const	*new_str;
	int			i;

	i = 0;
	while (**p_str == c)
		*p_str += 1;
	new_str = *p_str;
	while ((*p_str)[i] && (*p_str)[i] != c)
		i++;
	*p_str += i;
	return (ft_substr(new_str, 0, i));
}

static void	_free(char **words, int wc)
{
	int	i;

	i = wc;
	while (i >= 0)
		free(words[i--]);
	free(words);
}

static char	**_fill(char **words, char const *s, char c, int wc)
{
	int	i;

	i = 0;
	while (i < wc)
	{
		words[i] = _str_from_word(&s, c);
		if (!words[i])
		{
			_free(words, i - 1);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		wc;

	if (!s)
		return (NULL);
	wc = _word_count(s, c);
	words = malloc(sizeof(char *) * (wc + 1));
	if (!words)
		return (NULL);
	return (_fill(words, s, c, wc));
}
