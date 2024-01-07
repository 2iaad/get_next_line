/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:39:07 by zderfouf          #+#    #+#             */
/*   Updated: 2024/01/07 20:39:09 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

#define BUFFER_SIZE 10

char *get_next_line(int fd);

#endif
