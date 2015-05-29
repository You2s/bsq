/*
** my_func.c for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Wed Jan 14 12:02:48 2015 Youssef Sayyouri
** Last update Tue Feb 10 18:46:51 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/bsq.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    my_putstr("Error: NULL value is prohibited");
  else
    {
      while (str[i])
	my_putchar(str[i++]);
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	neg;

  i = 0;
  nbr = 0;
  neg = 1;
  if (str == NULL)
    return (0);
  while (str[i] == '-')
    {
      neg = neg * -1;
      i++;
    }
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
        return (nbr * neg);
      nbr = nbr * 10 + (str[i] - '0');
      i++;
    }
  return (nbr * neg);
}

void	*my_malloc(size_t s)
{
  char	*ptr;

  ptr = malloc(s);
  if (ptr == NULL)
    {
      my_putstr("Error: malloc failed\n");
      exit(1);
    }
  return (ptr);
}

void	show_int_tab(char **char_tab, int **int_tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (char_tab[i])
    {
      j = 0;
      while (char_tab[i][j])
	{
	  my_putnbr(int_tab[i][j]);
	  my_putchar(' ');
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}

void	my_putnbr(int nbr)
{
  int	neg;

  neg = 0;
  if (nbr < 0)
    {
      my_putchar('-');
      if (nbr == -2147483648)
        {
          neg = 1;
          nbr++;
        }
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    my_putnbr(nbr / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nbr % 10 + '1');
    }
  else
    my_putchar(nbr % 10 + '0');
}

