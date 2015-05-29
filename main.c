/*
** main.c for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Mon Dec 15 16:46:59 2014 Youssef Sayyouri
** Last update Sun Feb 22 20:29:46 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "include/bsq.h"

int	main(int ac, char **av)
{
  char	**char_tab;
  int	**int_tab;
  int	file;
  char	*str;
  int	nbl;

  if (arg_check(ac) == -1)
    return (0);
  file = open(av[1], O_RDONLY);
  if (file_check(file, av[1]) == -1)
    return (0);
  str = get_next_line(file);
  if (gnl_check(str) == -1)
    return (0);
  nbl = gnl_check(str);
  char_tab = init_char_tab(file, nbl);
  if (map_check(nbl, tab_count(char_tab, 'l')) == -1)
    return (0);
  int_tab = init_int_tab(char_tab);
  parse_int_tab(char_tab, int_tab);
  show_int_tab(char_tab, int_tab);
  free(str);
  free_int_tab(char_tab, int_tab);
  free_char_tab(char_tab);
  close(file);
  return (0);
}

void	free_char_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    free(tab[i++]);
  free(tab);
}

void	free_int_tab(char **char_tab, int **int_tab)
{
  int	i;

  i = 0;
  while (char_tab[i])
    free(int_tab[i++]);
  free(int_tab);
}

char     **init_char_tab(int file, int nbl)
{
  char	**tab;
  int	i;
  char	*str;

  i = 0;
  if (nbl == 0)
    return (0);
  tab = my_malloc(sizeof(char *) * (nbl + 1));
  if (tab == NULL)
    return (0);
  while ((str = get_next_line(file)))
    tab[i++] = str;
  tab[i] = NULL;
  free(str);
  return (tab);
}

void	show_char_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
