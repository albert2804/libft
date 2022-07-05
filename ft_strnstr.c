/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:25:09 by aestraic          #+#    #+#             */
/*   Updated: 2022/07/05 12:38:41 by aestraic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


/*char *ft_strnstr(const char    *big, const char    *little, size_t len)
{
    char *bg = (char *)big;
    char *lttle = (char *)little;
    int i;
    int n;
    
    if (ft_strlen((char *)little) == 0)
        return((char *)big);
    if (len < 0)
        len = ft_strlen((char*)big) + ft_strlen((char *) little);
    while (*bg != '\0' && len > 0)
    {
        n = 0;
        i = 0;
        lttle = (char *)little;
        while(i == 0 && *bg == *lttle && *lttle != '\0' && len > 0)
            {
                i = ft_strncmp(bg++, lttle++, 1);
                n++;
                len --;
                if (*lttle == '\0' && i == 0)
                    return(bg - n);
            }
    bg++;
    len--;
    }
    return (0);
}*/
/*char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	int	diff;
	int i; 
	int	n;

	//char *bg = (char *)big;
    //char *lttle = (char *)little;
	n = 0;
	i = 0;
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	if (len < 0)
		len = ft_strlen((char *)big) + ft_strlen((char *) little);
	while (big[i] != '\0' && len > 0)
	{
//        n = 0;
		diff = 0;
        //little = (char *)little;
		while (diff == 0 && big[i] == little[i] && little[i] != '\0' && len > 0)
		{
			//printf("Big:%c \n, Little: %c\n", *big, *little );
			//printf("n: %d\n len:%d\n, i: %d\n\n", n, len, i);
			diff = ft_strncmp(big[i], little[i], 1);
			n++;
			i++;
			len --;
			if (little[i] == '\0' && diff == 0)
				return (((char *)big)[i] - n);
		}
	big++;
	len--;
	}
	return (0);
}
*/
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *bg;
    
    i = 0;
    bg = ((char *)big);
 
    if ((ft_strlen(little)) == 0 || big == little)
        return (bg);
        
    while (i < len && bg[i] != '\0')
    {
        j = 0;
        while (i + j < len && bg[i + j] != '\0' && little[j] != '\0' && bg[i + j] == little[j])
            j++;
 
        if (j == (ft_strlen(little)))
            return (bg + i);
        i++;
    }
    return (0);
}