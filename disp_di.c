/*
** my_put_nbr.c for my_put_nbr.c in /home/Mystogunn/CPool_Day05
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Mon Oct 10 08:58:54 2016 Josselin Cosmao
** Last update Wed Nov 16 19:30:18 2016 Josselin Cosmao
*/

#include "my.h"
#include <stdarg.h>

int	disp_di(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
  return (0);
}
