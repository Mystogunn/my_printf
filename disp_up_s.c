/*
** my_put_nbr_bin.c for my_put_nbr_bin.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf
**
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
**
** Started on  Wed Nov  9 19:18:54 2016 Josselin Cosmao
** Last update Wed Nov 16 23:35:40 2016 Josselin Cosmao
*/

#include <stdlib.h>
#include "my.h"
#include <stdarg.h>

int	my_put_nbr_up_s(char nb)
{
  char	*str;
  int	i;
  int	size;
  int	*mem;

  str = "01234567";
  i = 0;
  size = my_strlen(str);
  mem = malloc(sizeof (char) * 100);
  while (nb != 0)
    {
      mem[i] = str[nb % size];
      nb = nb / size;
      i = i + 1;
    }
  while (i != -1)
    {
      my_putchar(mem[i]);
      i = i - 1;
    }
  return (nb);
}

int	my_up_s(char *mlr)
{
  int	repet;

  repet = 0;
  while (mlr[repet] != '\0')
    {
      if (mlr[repet] < 32 || mlr[repet] > 126)
	{
	  my_putchar('\\');
	  if (mlr[repet] < 1)
	    my_putchar('0');
	  if (mlr[repet] < 8)
	    my_putchar('0');
	  if (mlr[repet] < 32)
	    my_putchar('0');
	  my_put_nbr_up_s(mlr[repet]);
	}
      else
	my_putchar(mlr[repet]);
      repet = repet + 1;
    }
  return (repet);
}

int	disp_up_s(va_list ap)
{
  my_up_s(va_arg(ap, char *));
  return (0);
}
