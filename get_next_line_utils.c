/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:36:11 by zderfouf          #+#    #+#             */
/*   Updated: 2024/01/07 20:39:01 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(!str)
		return(0);
	while (str[i])
		i++;
	return (i);
}

char    *ft_strjoin(char *s1, char *s2)
{
	int     i;
	int     j;
	char    *str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return(NULL);
	if (!(str = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1)))
		return(NULL);
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = 0;
	return (str);
}
char    *ft_strdup(char *s)
{
	int     i;
	char    *str;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *) malloc (ft_strlen(s) + 1)))
		return("NULL");
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return(str);
}
int main()
{
	ssize_t rd;
	static char a[20];
	int fd = open("file.txt", O_RDWR | O_CREAT , 0777);

	printf("%zd\n",read(fd,a,BUFFER_SIZE));
	printf("%d\n",fd);
	rd = 1;
	while (rd > 0)
	{
		rd = read(fd,a,BUFFER_SIZE);
		printf("%s",a);
	}
	printf("\n%zd\n",rd);
}
