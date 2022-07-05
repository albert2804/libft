/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:25:09 by aestraic          #+#    #+#             */
/*   Updated: 2022/07/05 12:38:41 by aestraic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int ft_set_in_str(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

static size_t ft_get_first_position(char const *s, char const *set)
{
	size_t len_str;
	size_t i;

	i = 0;
	len_str = ft_strlen(s);
	while (i < len_str && ft_set_in_str(s[i], set) == 0)
		i++;
	return (i);
}

static size_t ft_get_last_position(char const *s, char const *set)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i > 0 && ft_set_in_str(s[i], set) == 0 )
		i--;
	if (i < 0)
		i = 0;
	return (i);
}

/*
char *ft_strtrim(char const *str, char const *set)
{
	size_t first;
	size_t last;
	char *sub_str;
	
	first = 0;
	last = 0;
	if ((!str) || (!set))
		return (NULL);
	first = ft_get_first_position(str, set);
	last = ft_get_last_position(str, set);
	if (first > last)
	{
		sub_str = ft_strdup("");
	}
	else
	{
		sub_str = malloc((last - first + 1) * sizeof(char) + 1);
		if(!sub_str)
			return NULL;
		sub_str = ft_substr(str, first, last - first + 1);
	}	
	return (sub_str);
}
*/

///*
char    *ft_strtrim(char const *str, char const *set)
{
    size_t first;
    size_t last;
    char *sub_str;
    size_t  i;

    i = 0;
    first = 0;
    last = 0;
	if(!set || !str)
		return NULL;
    first = ft_get_first_position(str, set);
    last = ft_get_last_position(str, set);
    if (first > last)
        sub_str = ft_strdup("");
    else
    {
        sub_str = malloc((last - first + 2) * sizeof(char));
        if (!sub_str)
            return (NULL);
        while (i < (last - first + 1))
        {
            sub_str[i] = str[first + i];
            i++;
        }
    sub_str[i] = '\0';
    }
    return (sub_str);
}
//*/