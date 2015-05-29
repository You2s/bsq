/*
** debug.c for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Fri Jan 16 17:47:09 2015 Youssef Sayyouri
** Last update Sun Feb 22 20:29:46 2015 Youssef Sayyouri
*/

#include "include/bsq.h"

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
