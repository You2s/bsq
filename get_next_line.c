/*
** get_next_line.c for ddd in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
**
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
**
** Started on  Mon Jan 26 23:11:09 2015 Youssef Sayyouri
** Last update Sat Feb 28 20:57:05 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/bsq.h"

char            *my_realloc(char *old, int size)
{
  int		i;
  char		*new;

  i = 0;
  new = NULL;
  new = my_malloc((my_strlen(old) + size) * sizeof(char *));
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}

char		*get_next_line(const int fd)
{
  static char	buff;
  int		rd;
  char		*line;
  int		i;

  i = 0;
  line = my_malloc(sizeof(char *));
  rd = read(fd, &buff, 1);
  if (rd == 0)
    {
      return (NULL);
    }
  while (buff != '\n')
    {
      if (buff == 0 || buff == '\0')
	return (NULL);
      line = my_realloc(line, 1);
      line[i] = buff;
      read(fd, &buff, 1);
      i++;
    }
  line[i] = '\0';
  return (line);
}
