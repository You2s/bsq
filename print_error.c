/*
** print_error.c for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Sun Jan 18 22:30:06 2015 Youssef Sayyouri
** Last update Sun Jan 18 22:35:35 2015 Youssef Sayyouri
*/

#include <unistd.h>
#include "include/bsq.h"

int	arg_check(int ac)
{
  if (ac != 2)
    {
      my_putstr("Error: wrong number of arguments\n");
      return (-1);
    }
  return (0);
}

int	file_check(int file, char *av)
{
  if (file == -1)
    {
      my_putstr("Error: the file ");
      my_putstr(av);
      my_putstr(" is not exists or you don't have the right permissions\n");
      return (-1);
    }
  return (0);
}

int	gnl_check(char *str)
{
  int	nbl;

  if (str == NULL)
    {
      my_putstr("Error: the file is empty or this is a directory\n");
      return (-1);
    }
  nbl = my_getnbr(str);
  if (nbl == 0)
    {
      my_putstr("Error: the map is not in the correct format\n");
      return (-1);
    }
  return (nbl);
}

int	map_check(int n1, int n2)
{
  if (n1 != n2)
    {
      my_putstr("Error: the map is not in the correct format\n");
      return (-1);
    }
  return (0);
}
