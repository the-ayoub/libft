/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:32:30 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/24 20:22:04 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	palabras_count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
			if (i > 0 && s[i - 1] != c)
				words++;
		i++;
	}
	return (words);
}

void	*liberar(char **lista, int x)
{
	while (x >= 0)
	{
		free(lista[x]);
		x--;
	}
	free(lista);
	return (NULL);
}

char	**palabras_copy(char *s, char c, char **lista)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		p = i;
		while (s[i++] != c)
			i++;
		lista[x] = ft_substr(s, p, i - p);
		if (!lista[x++])
			return (liberar(lista, x - 2));
	}
	return (lista);
}

char	**ft_split(char const *s, char c)
{
	char	**lista;

	palabras_count(s, c);
	lista = (char **)malloc((palabras_count(s, c) + 1) * sizeof(char *));
	if (!lista)
		return (NULL);
	return (palabras_copy(s, c, lista));
}
