/*
** my_put_nbr_bin.c for my_put_nbr_bin.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf
**
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
**
** Started on  Wed Nov  9 19:18:54 2016 Josselin Cosmao
** Last update Tue Nov 15 20:08:27 2016 Josselin Cosmao
*/

#include <stdlib.h>
#include "my.h"
#include <stdarg.h>

int	disp_up_hexa(unsigned int nb)
{
  char	*str;
  int	i;
  int	size;
  int	*mem;

  str = "0123456789ABCDEF";
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

int	my_put_nbr_up_hexa(va_list ap)
{
  disp_up_hexa(va_arg(ap, unsigned int));
  return (0);
}
