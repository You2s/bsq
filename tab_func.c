/*
** tab_func.c for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Fri Jan 16 17:00:56 2015 Youssef Sayyouri
** Last update Thu Jan 22 12:21:38 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include "include/bsq.h"

int	**init_int_tab(char **char_tab)
{
  int	**int_tab;
  int	i;
  int	j;

  i = tab_count(char_tab, 'l');
  j = tab_count(char_tab, 'c');
  int_tab = my_malloc(sizeof(int *) * i);
  if (int_tab == NULL)
    return (0);
  i =  0;
  while (char_tab[i])
    {
      int_tab[i] = malloc(sizeof(int **) * j);
      j = 0;
      while (char_tab[i][j])
	{
	  if (char_tab[i][j] == 'o')
	    int_tab[i][j] = 0;
	  else
	    int_tab[i][j] = (j == 0 || i == 0) ? 1 : min_val(int_tab, i , j);
	  j++;
	}
      i++;
    }
  return (int_tab);
}

int	tab_count(char **tab, char type)
{
  int	i;

  i = 0;
  if (type == 'l')
    {
      while (tab[i])
	i++;
      return (i);
    }
  else if (type == 'c')
    {
      while (tab[0][i])
	i++;
      return (i);
    }
  return (0);
}

int	min_val(int **tab, int i, int j)
{
  int	x;
  int	y;
  int	z;

  x = tab[i][j - 1];
  y = tab[i -1][j - 1];
  z = tab[i -1][j];
  if (x <= y && x <= z)
    return (x + 1);
  else if (y <= x && y <= z)
    return (y + 1);
  else if (z <= x && z <= y)
    return (z + 1);
  return (0);
}

void	parse_int_tab(char **char_tab, int **int_tab)
{
  int	x;
  int	y;
  int	i;
  int	j;
  int	max_val;

  i = 0;
  max_val = 0;
  while (char_tab[i])
    {
      j = 0;
      while (char_tab[i][j])
	{
	  if (int_tab[i][j] > max_val)
	    {
	      max_val = int_tab[i][j];
	      x = i;
	      y = j;
	    }
	  j++;
	}
      i++;
    }
  square(char_tab, x, y, max_val);
}

void	square(char **tab, int x, int y, int max_val)
{
  int	save_y;
  int	save_x;

  save_y = y;
  save_x = x;
  while (y != (save_y - max_val))
    {
      x = save_x;
      while (x != (save_x - max_val))
	{
	  tab[x][y] = 'x';
	  x--;
	}
      y--;
    }
  show_char_tab(tab);
}
