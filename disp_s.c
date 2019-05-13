/*
** disp_s.c for disp_s.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Tue Nov 15 19:08:49 2016 Josselin Cosmao
** Last update Tue Nov 15 19:43:41 2016 Josselin Cosmao
*/

#include "my.h"
#include <stdarg.h>

int	disp_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
  return (0);
}
